Training examples
=================

To get the presentation running I've had to fire up a python web server and download the reveal.js library:



To download presentation type:
	https://github.com/dhickin/epicsv4Training/archive/master.zip
To download reveal.js:
	https://github.com/hakimel/reveal.js/archive/master.zip

Then unzip the presentation, copy the reveal zip to the directory of the presentation and unzip.

Fire up python web server in the presentation directory:
	module load python/ana
	python -m SimpleHTTPServer&

Now run the presentation in the browser:
	firefox http://localhost:8000/training.slides.html

Note you may have to change the port if the server serves on a diffrent port from default.


If all this works we can add the reveal.js library to our GitHub repo so that there is only one download.

