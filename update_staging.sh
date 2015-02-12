#!/bin/bash

# Go to docroot/
cd /var/local/osha-website/docroot

git checkout robots.txt

# Pulling the last Updates
git pull

# Sync from edw staging
drush downsync @cms.production @cms.local -y

drush cc all

chmod u+w robots.txt
  echo "User-agent: *" > robots.txt
  echo "Disallow: /" >> robots.txt
chmod u-w robots.txt
