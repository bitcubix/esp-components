all: clean

clean:
	rm -rf .pytest_cache
	rm -rf test_app/__pycache__
	rm -rf test_app/build
