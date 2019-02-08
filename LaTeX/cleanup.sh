#!/bin/bash
if [ $# -lt 1 ]; then
  echo "usage:"
  echo "    cleanup.sh <language>"
  echo ""
  echo "for example"
  echo "    ./cleanup.sh en"
  echo "    ./cleanup.sh de"
  echo ""
  echo "This program removes all temorary files which are created by"
  echo "pdflatex raspiblaster_<language>"
  exit 1
fi
echo "cleaning up for language version '$1':"
if [ -d chapter/$1 ]; then
  # The language implementation exists in chapters: Clean up
  rm EsploraGamingController_$1.aux EsploraGamingController_$1.idx EsploraGamingController_$1.lo? EsploraGamingController_$1.nlo EsploraGamingController_$1.out EsploraGamingController_$1.toc
  rm chapter/$1/*.aux
  rm layout/*.aux layout/$1/*.aux
else  
  echo "The EsploraGamingController manual doesn't exist"
  echo "for language '$1' yet." 
  echo "But don't hesitate to add it :-)" 
  exit 2
fi

