ETAGS=etags --language=none --regex='/^(d\w+[ \t]+(?\([^ \t()]+\)/\1/'

all:

tags: local-tags

local-tags:
	$(ETAGS) *.proto

all-tags:
	find . -name \*.proto | $(ETAGS) -

.PHONY: all tags local-tags all-tags
