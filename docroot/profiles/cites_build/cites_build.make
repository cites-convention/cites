api = 2
core = 7.x

projects[drupal][version] = "7.22"

projects[entityreference][type]    = "module"
projects[entityreference][version] = "1.0"
projects[entityreference][subdir]  = "contrib"

projects[field_collection][type]    = "module"
projects[field_collection][version] = "1.x-dev"
projects[field_collection][subdir]  = "contrib"

projects[email][type]    = "module"
projects[email][version] = "1.2"
projects[email][subdir]  = "contrib"

projects[simplenews][type]    = "module"
projects[simplenews][version] = "1.0"
projects[simplenews][subdir]  = "contrib"

projects[imce][type]    = "module"
projects[imce][version] = "1.7"
projects[imce][subdir]  = "contrib"

projects[date_range_formatter][type]    = "module"
projects[date_range_formatter][version] = "1.0"
projects[date_range_formatter][subdir]  = "contrib"

projects[date][type]    = "module"
projects[date][version] = "2.6"
projects[date][subdir]  = "contrib"

projects[gss][type]    = "module"
projects[gss][version] = "1.9"
projects[gss][subdir]  = "contrib"

projects[context][type]    = "module"
projects[context][version] = "3.0-beta6"
projects[context][subdir]  = "contrib"

projects[link][type] = module
projects[link][version] = 1.x-dev
projects[link][subdir] = contrib

projects[acl][type] = module
projects[acl][version] = "1.0"
projects[acl][subdir] = "contrib"

projects[content_access][version] = "1.2-beta2"
projects[content_access][subdir] = "contrib"

projects[forum_access][version] = "1.2"
projects[forum_access][subdir] = "contrib"

projects[admin_menu][version] = "3.0-rc4"
projects[admin_menu][subdir] = "contrib"

projects[front][version] = "2.1"
projects[front][subdir] = "contrib"

projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"

projects[features][version] = "2.x-dev"
projects[features][subdir] = "contrib"

projects[title][version] = "1.0-alpha7"
projects[title][subdir] = "contrib"

projects[l10n_update][version] = "1.x-dev"
projects[l10n_update][subdir] = "contrib"

projects[entity_translation][version] = "1.0-beta2"
projects[entity_translation][subdir] = "contrib"

projects[i18n][version] = "1.9"
projects[i18n][subdir] = "contrib"

projects[advanced_forum][version] = "2.3"
projects[advanced_forum][subdir] = "contrib"

projects[author_pane][version] = "2.0-beta1"
projects[author_pane][subdir] = "contrib"

projects[chain_menu_access][version] = "2.0"
projects[chain_menu_access][subdir] = "contrib"

projects[draggableviews][type]    = "module"
projects[draggableviews][version] = "2.0"
projects[draggableviews][subdir]  = "contrib"

projects[entity][version] = "1.0"
projects[entity][subdir] = "contrib"

projects[nice_menus][version] = "2.4"
projects[nice_menus][subdir] = "contrib"

projects[node_notify][version] = "1.0"
projects[node_notify][subdir] = "contrib"

projects[on_the_web][version] = "1.4"
projects[on_the_web][subdir] = "contrib"

projects[profile2][version] = "1.3"
projects[profile2][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[google_analytics][version] = "1.3"
projects[google_analytics][subdir] = "contrib"

projects[subscriptions][version] = "1.1"
projects[subscriptions][subdir] = "contrib"

projects[variable][version] = "2.2"
projects[variable][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[site_map][version] = "1.0"
projects[site_map][subdir] = "contrib"

projects[privatemsg][version] = "1.4"
projects[privatemsg][subdir] = "contrib"

projects[libraries][type]    = "module"
projects[libraries][version] = "2.1"
projects[libraries][subdir]  = "contrib"

projects[views_slideshow][type]    = "module"
projects[views_slideshow][version] = "3.0"
projects[views_slideshow][subdir]  = "contrib"
projects[views_slideshow][patch][] = "http://drupal.org/files/1872616-remove-deprecated-preg_replace-7.x-3.0.patch"

projects[views][type]    = "module"
projects[views][version] = "3.3"
projects[views][subdir]  = "contrib"

projects[taxonomy_access_fix][version] = "1.1"
projects[taxonomy_access_fix][subdir] = "contrib"

projects[jquery.cycle][type]            = library
libraries[jquery.cycle][directory_name] = jquery.cycle
projects[jquery.cycle][download][type]  = get
projects[jquery.cycle][download][url]   = http://malsup.github.com/jquery.cycle.all.js

projects[json2][type]            = library
libraries[json2][directory_name] = json2
projects[json2][download][type]  = get
projects[json2][download][url]   = https://raw.github.com/douglascrockford/JSON-js/master/json2.js

projects[profiler][type] = library
libraries[profiler][directory_name] = profiler
projects[profiler][download][type] = get
projects[profiler][download][url] = http://ftp.drupal.org/files/projects/profiler-7.x-2.x-dev.tar.gz

; Eau de Web modules

projects[cites_country][type] = "module"
projects[cites_country][location] = "http://fserver.eaudeweb.ro/fserver"

projects[cites_document][type] = "module"
projects[cites_document][location] = "http://fserver.eaudeweb.ro/fserver"

projects[cites_external_news][type] = "module"
projects[cites_external_news][location] = "http://fserver.eaudeweb.ro/fserver"

projects[cites_institution][type] = "module"
projects[cites_institution][location] = "http://fserver.eaudeweb.ro/fserver"

projects[cites_meeting][type] = "module"
projects[cites_meeting][location] = "http://fserver.eaudeweb.ro/fserver"

projects[cites][type] = "module"
projects[cites][location] = "http://fserver.eaudeweb.ro/fserver"

projects[cites_slideshow][type] = "module"
projects[cites_slideshow][location] = "http://fserver.eaudeweb.ro/fserver"

projects[cites_parties_notification][type] = "module"
projects[cites_parties_notification][location] = "http://fserver.eaudeweb.ro/fserver"

projects[cites_theme][type] = "theme"
projects[cites_theme][location] = "http://fserver.eaudeweb.ro/fserver"
