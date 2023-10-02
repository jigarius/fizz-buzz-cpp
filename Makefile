.PHONY: ssh
ssh:
	docker compose exec -ti main ash


.PHONY: compile
compile:
	g++ -o fizz-buzz fizz-buzz.cpp
