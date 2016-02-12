# Test for sending and receiving DATA and I-DATA Chunks

The tests are using  an extended version of the [`packetdrill`](https://github.com/nplab/packetdrill) tool
for testing the SCTP stack of the FreeBSD kernel.

| Name                                                                                             | Verdict      |
|:-------------------------------------------------------------------------------------------------|:------------:|
|[sctp-idata-01](sctp-idata-01.pkt "Receive two consequtive complete messages on the same stream") | Failed       | 
