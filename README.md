# Developing Support for [draft-ietf-tsvwg-sctp-ndata](https://tools.ietf.org/html/draft-ietf-tsvwg-sctp-ndata)

This repository is used to add support of [draft-ietf-tsvwg-sctp-ndata](https://tools.ietf.org/html/draft-ietf-tsvwg-sctp-ndata)
to the SCTP kernel implementation of FreeBSD. This will also run as part of the userland stack [usrsctp](https://github.com/sctplab/usrsctp).
It contains:
* The XML sources of the Internet Draft are available at [draft-ietf-tsvwg-sctp-ndata.xml](draft-ietf-tsvwg-sctp-ndata.xml), which can be processed by [xml2rfc](http://xml2rfc.ietf.org). You can access the current unsubmitted version rendered as [html](http://xml2rfc.ietf.org/cgi-bin/xml2rfc.cgi?input=&url=https%3A%2F%2Fraw.githubusercontent.com%2Fsctplab%2Fsctp-idata%2Fmaster%2Fdraft-ietf-tsvwg-sctp-ndata.xml&modeAsFormat=html%2Fascii&type=towindow&Submit=Submit) or [txt](http://xml2rfc.ietf.org/cgi-bin/xml2rfc.cgi?input=&url=https%3A%2F%2Fraw.githubusercontent.com%2Fsctplab%2Fsctp-idata%2Fmaster%2Fdraft-ietf-tsvwg-sctp-ndata.xml&modeAsFormat=txt%2Fascii&type=towindow&Submit=Submit).
* Test scripts using an extended version of the [packetdrill](https://github.com/nplab/packetdrill) test tool are available in [tests](tests/README.md).
* The shared source code of the SCTP stack is available in [src](src/README.md). This is work in progress.

Please note that recent versions of [Wireshark](https://www.wireshark.org) already support the I-DATA chunk.
