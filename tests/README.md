# Test for sending and receiving DATA and I-DATA Chunks

The tests are using  an extended version of the [`packetdrill`](https://github.com/nplab/packetdrill) tool
for testing the SCTP stack of the FreeBSD kernel.

| Name                                                                                             | Verdict stable/10 | Verdict head |
|:-------------------------------------------------------------------------------------------------|:-----------------:|:------------:|
|[sctp-idata-01](sctp-idata-01.pkt "Receive two consequtive complete messages on the same stream") | Failed            | Failed       |
|[sctp-idata-02](sctp-idata-02.pkt "Receive two consequtive complete messages on the same stream") | Passed            | Passed       |
|[sctp-idata-03](sctp-idata-03.pkt "Receive two consequtive complete messages on the same stream") | Passed            | Passed       |
|[sctp-idata-04](sctp-idata-04.pkt "Receive two consequtive complete messages on the same stream") | Passed            | Passed       |
|[sctp-idata-05](sctp-idata-05.pkt "Receive two consequtive complete messages on the same stream") | Passed            | Passed       |
|[sctp-idata-06](sctp-idata-06.pkt "Receive two consequtive complete messages on the same stream") | Failed            | Failed       |
|[sctp-idata-07](sctp-idata-07.pkt "Receive two consequtive complete messages on the same stream") | Passed            | Passed       |
|[sctp-idata-08](sctp-idata-08.pkt "Receive two consequtive complete messages on the same stream") | Passed            | Passed       |
|[sctp-idata-09](sctp-idata-09.pkt "Receive two consequtive complete messages on the same stream") | Passed            | Passed       |
|[sctp-idata-10](sctp-idata-10.pkt "Receive two consequtive complete messages on the same stream") | Failed            | Failed       |
|[sctp-idata-11](sctp-idata-11.pkt "Receive two consequtive complete messages on the same stream") | Failed            | Failed       |
|[sctp-idata-12](sctp-idata-12.pkt "Receive two consequtive complete messages on the same stream") | Passed            | Passed       |
|[sctp-idata-13](sctp-idata-13.pkt "Receive two consequtive complete messages on the same stream") | Passed            | Passed       |
|[sctp-idata-14](sctp-idata-14.pkt "Receive two consequtive complete messages on the same stream") | Failed            | Failed       |
|[sctp-idata-15](sctp-idata-15.pkt "Receive two consequtive complete messages on the same stream") | Failed            | Failed       |
|[sctp-idata-16](sctp-idata-16.pkt "Receive two consequtive complete messages on the same stream") | Failed            | Failed       |
|[sctp-idata-17](sctp-idata-17.pkt "Receive two consequtive complete messages on the same stream") | Failed            | Failed       |
|[sctp-idata-18](sctp-idata-18.pkt "Receive two consequtive complete messages on the same stream") | Passed            | Passed       |
|[sctp-idata-19](sctp-idata-19.pkt "Receive two consequtive complete messages on the same stream") | Passed            | Passed       |
|[sctp-idata-20](sctp-idata-20.pkt "Receive two consequtive complete messages on the same stream") | Passed            | Passed       |

