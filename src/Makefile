DEF='/^(d\w+[ \t]+(?\([^ \t()]+\)/\1/'
SLOT='/^[ \t]*(slot[ \t]+[^ \t()]+[ \t]+(?\([^ \t()]+\)/\1/'
ETAGS=etags --language=none --regex=$(DEF) --regex=$(SLOT)

all:

tags: local-tags

local-tags:
	$(ETAGS) *.goo

all-tags:
	find . -name \*.goo | $(ETAGS) -

.PHONY: all tags local-tags all-tags
