Training examples
=================

To get things running we need a version of Python that has a recent version of ipython.  Unfortunately
the version of ipython at Diamond is way out of date - so it needs to be upgraded.  That in turn means
installing without admin priveleges.

1. To run Python:
	module load python/ana
	
2. To install ipython in your home directory:
	pip install --user ipython
   and check the version is >= 4.2.0
	ipython --version

3. To run ipython:
	cd <to-the-directory-of-the-notebook>
	ipython notebook

4. To build the presentation from <training.ipynb>:
	ipython nbconvert training.ipynb --to slides --reveal-prefix "http://cdn.jsdelivr.net/reveal.js/2.6.2"

5. To view the presentation in the browser, first run a Python Web Server:
	python -m SimpleHTTPServer 8000 &

6. Now you can view the presentation:
	firefox http://localhost:8000/training.slides.html
	
7. Steps 4, 5 and 6 can be done all at once with:
	ipython nbconvert training.ipynb --to slides --post serve
