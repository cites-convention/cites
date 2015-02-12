/**
 * @name		jQuery Countdown Plugin
 * @author		Martin Angelov
 * @version 	1.0
 * @url			http://tutorialzine.com/2011/12/countdown-jquery/
 * @license		MIT License
 */

(function ($) {
    // Number of seconds in every time division
    var days = 24 * 60 * 60,
        hours = 60 * 60,
        minutes = 60;

    // Creating the plugin
    $.fn.countdown = function (prop) {
    
        var options = $.extend({
            callback: function () {},
            timestamp: 0
        }, prop);
        
        var left, d, h, m, s, positions;
        var onesIndex, tensIndex;
        var lotsOfDays = false;
        var tickCount = 0;
        
        // Initialize the plugin
        init(this, options);
        
        positions = this.find('.position');
        
        (function tick() {
        
            tickCount++;
            
            // Time left
            left = Math.floor((options.timestamp - (new Date())) / 1000);
           
            if (left < 0) {
                left = 0;
            }
            
            // Number of days left
            d = Math.floor(left / days);
            
            //Determine if we have more than 99 hours in the countdown;
            lotsOfDays = ($('.countDays').children().length > 2);
            if (lotsOfDays) {
                onesIndex = 2;
                tensIndex = 1;
            } else {
                onesIndex = 1;
                tensIndex = 0;
            }
            updateDisplay(d, true);
            left -= d * days;
            
            // Number of hours left
            h = Math.floor(left / hours);
            updateDisplay(h);
            left -= h * hours;
            
            // Number of minutes left
            m = Math.floor(left / minutes);
            updateDisplay(m);
            left -= m * minutes;
            
            // Number of seconds left
            s = left;
            updateDisplay(s);
            
            // Calling an optional user supplied callback
            options.callback(d, h, m, s);
            
            // Scheduling another call of this function in 1s
            setTimeout(tick, 1000);
        })();
        
        // This function updates two digit positions at once
        function updateDisplay(value, updatingDays) {
            switchDigit(positions.eq(tensIndex), Math.floor(value / 10) % 10);
            switchDigit(positions.eq(onesIndex), value % 10);
            if (updatingDays) if (lotsOfDays) {
                switchDigit(positions.eq(0), Math.floor(value * 100 / 10000));
            }
            
            tensIndex += 2;
            onesIndex = tensIndex + 1;
        }
        return this;
    };

    function init(elem, options) {
        elem.addClass('countdownHolder');
        
        // Time left
        var left = Math.floor((options.timestamp - (new Date())) / 1000);
        
        // Number of days left
        var d = Math.floor(left / days);
        
        // Creating the markup inside the container
        $.each(['Days', 'Hours', 'Minutes', 'Seconds'], function (i) {
            if (this == 'Days' && d > 99) {
                $('<span class="count' + this + '">').html(
                    '<span class="position">'+
                    	'<span class="digit static">0</span>'+
                    '</span>'+
                    '<span class="position">'+
                    	'<span class="digit static">0</span>'+
                    '</span>'+
                    '<span class="position">'+
                    	'<span class="digit static">0</span>'+
                    '</span>').appendTo(elem);
            } else {
                $('<span class="count' + this + '">').html(
                    '<span class="position">'+
                    	'<span class="digit static">0</span>'+
                    '</span>'+
                    '<span class="position">'+
                    	'<span class="digit static">0</span>'+
                    '</span>').appendTo(elem);
            }
            if (this != "Seconds") {
                elem.append('<span class="countDiv countDiv' + i + '"></span>');
            }
        });
    }
    
    // Creates an animated transition between the two numbers
    function switchDigit(position, number) {
    
        var digit = position.find('.digit');
        
        if (digit.is(':animated')) {
            return false;
        }
        if (position.data('digit') == number) {
            // We are already showing this number
            return false;
        }
        
        position.data('digit', number);
        
        var replacement = $('<span>', {
            'class': 'digit',
            css: {
                top: '-2.1em',
                opacity: 0
            },
            html: number
        });
        
        // The .static class is added when the animation
        // completes. This makes it run smoother.
        
        digit
        	.before(replacement)
            .removeClass('static')
            .animate({top: '2.5em',opacity: 0}, 'fast', function () {
            	digit.remove();
        });
        
        replacement.delay(100)
            .animate({top: 0,opacity: 1}, 'fast', function () {
            	replacement.addClass('static');
        });
    }
})(jQuery);