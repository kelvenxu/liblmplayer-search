
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>

// gb2312±àÂë±í, À´×Ôcodefuns.net
static gchar *
lookup(int ncode)
{
	char *str = NULL;
	switch(ncode)
	{
		case 6325:
		case 6436:
		case 7571:
		case 7925:
			str = g_strdup("a");
			break;
		case 6263:
		case 6440:
		case 7040:
		case 7208:
		case 7451:
		case 7733:
		case 7945:
		case 8616:
			str = g_strdup("ai");
			break;
		case 5847:
		case 5991:
		case 6278:
		case 6577:
		case 6654:
		case 7281:
		case 7907:
		case 8038:
		case 8786:
			str = g_strdup("an");
			break;
			str = g_strdup("ang");
			break;
		case 5974:
		case 6254:
		case 6427:
		case 6514:
		case 6658:
		case 6959:
		case 7033:
		case 7081:
		case 7365:
		case 8190:
		case 8292:
		case 8643:
		case 8701:
		case 8773:
			str = g_strdup("ao");
			break;
		case 6056:
		case 6135:
		case 6517:
		case 7857:
		case 8446:
		case 8649:
		case 8741:
			str = g_strdup("ba");
			break;
		case 6267:
		case 6334:
		case 7494:
			str = g_strdup("bai");
			break;
		case 5870:
		case 5964:
		case 7851:
		case 8103:
		case 8113:
		case 8418:
			str = g_strdup("ban");
			break;
		case 6182:
		case 6826:
			str = g_strdup("bang");
			break;
		case 6165:
		case 7063:
		case 7650:
		case 8017:
		case 8157:
		case 8532:
		case 8621:
			str = g_strdup("bao");
			break;
		case 5635:
		case 5873:
		case 5893:
		case 5993:
		case 6141:
		case 6703:
		case 7753:
		case 8039:
		case 8156:
		case 8645:
		case 8725:
			str = g_strdup("bei");
			break;
		case 5946:
		case 5948:
		case 7458:
		case 7928:
			str = g_strdup("ben");
			break;
		case 6452:
		case 7420:
			str = g_strdup("beng");
			break;
		case 5616:
		case 5734:
		case 6074:
		case 6109:
		case 6221:
		case 6333:
		case 6357:
		case 6589:
		case 6656:
		case 6725:
		case 6868:
		case 6908:
		case 6986:
		case 6994:
		case 7030:
		case 7052:
		case 7221:
		case 7815:
		case 7873:
		case 7985:
		case 8152:
		case 8357:
		case 8375:
		case 8387:
		case 8416:
		case 8437:
		case 8547:
		case 8734:
			str = g_strdup("bi");
			break;
		case 5650:
		case 5945:
		case 6048:
		case 6677:
		case 6774:
		case 7134:
		case 7614:
		case 7652:
		case 7730:
		case 7760:
		case 8125:
		case 8159:
		case 8289:
		case 8354:
		case 8693:
			str = g_strdup("bian");
			break;
		case 7027:
		case 7084:
		case 7609:
		case 7613:
		case 7958:
		case 7980:
		case 8106:
		case 8149:
		case 8707:
		case 8752:
			str = g_strdup("biao");
			break;
		case 8531:
			str = g_strdup("bie");
			break;
		case 5747:
		case 6557:
		case 7145:
		case 7167:
		case 7336:
		case 7375:
		case 7587:
		case 7957:
		case 8738:
		case 8762:
			str = g_strdup("bin");
			break;
		case 5787:
		case 5891:
		case 6280:
			str = g_strdup("bing");
			break;
		case 5781:
		case 6403:
		case 6636:
		case 7362:
		case 7502:
		case 7771:
		case 7864:
		case 8030:
		case 8404:
		case 8543:
		case 8559:
			str = g_strdup("bo");
			break;
		case 6318:
		case 6945:
		case 7419:
		case 7446:
		case 7848:
		case 7863:
		case 8519:
			str = g_strdup("bu");
			break;
		case 6474:
		case 7769:
			str = g_strdup("ca");
			break;
			str = g_strdup("cai");
			break;
		case 6978:
		case 7078:
		case 7218:
		case 8451:
		case 8785:
			str = g_strdup("can");
			break;
		case 5687:
			str = g_strdup("cang");
			break;
		case 6448:
		case 6878:
		case 8309:
		case 8429:
			str = g_strdup("cao");
			break;
		case 6692:
			str = g_strdup("ce");
			break;
		case 6515:
		case 6825:
			str = g_strdup("cen");
			break;
		case 6465:
			str = g_strdup("ceng");
			break;
		case 6639:
		case 6766:
		case 7017:
		case 7230:
		case 7311:
		case 7322:
		case 7363:
		case 7942:
		case 7979:
		case 8135:
			str = g_strdup("cha");
			break;
		case 5713:
		case 7846:
		case 8091:
		case 8218:
			str = g_strdup("chai");
			break;
		case 5770:
		case 5838:
		case 6159:
		case 6667:
		case 6893:
		case 6904:
		case 6981:
		case 7031:
		case 7086:
		case 7472:
		case 7688:
		case 7966:
		case 8324:
		case 8580:
			str = g_strdup("chan");
			break;
		case 5686:
		case 5943:
		case 6041:
		case 6137:
		case 6660:
		case 6568:
		case 6749:
		case 7029:
		case 7047:
		case 7438:
		case 7509:
		case 8680:
			str = g_strdup("chang");
			break;
		case 6687:
		case 7443:
		case 8173:
			str = g_strdup("chao");
			break;
		case 5969:
		case 7726:
			str = g_strdup("che");
			break;
		case 5840:
		case 5863:
		case 6251:
		case 6433:
		case 6923:
		case 7201:
		case 7320:
		case 7755:
		case 8619:
			str = g_strdup("chen");
			break;
		case 5609:
		case 5984:
		case 7239:
		case 7263:
		case 7583:
		case 7810:
		case 7881:
		case 7905:
		case 8146:
		case 8241:
		case 8508:
			str = g_strdup("cheng");
			break;
		case 5749:
		case 6015:
		case 6061:
		case 6319:
		case 6374:
		case 6420:
		case 6445:
		case 6633:
		case 7042:
		case 7523:
		case 7787:
		case 8023:
		case 8101:
		case 8161:
		case 8231:
		case 8304:
		case 8355:
		case 8388:
		case 8489:
		case 8556:
		case 8746:
			str = g_strdup("chi");
			break;
		case 6091:
		case 6671:
		case 6731:
		case 8409:
		case 8430:
			str = g_strdup("chong");
			break;
		case 5717:
		case 6492:
		case 6716:
		case 8112:
		case 8637:
			str = g_strdup("chou");
			break;
		case 5601:
		case 5927:
		case 6680:
		case 6732:
		case 7109:
		case 7238:
		case 7290:
		case 7343:
		case 8150:
		case 8260:
		case 8573:
		case 8777:
			str = g_strdup("chu");
			break;
		case 6285:
		case 6408:
		case 7590:
		case 8563:
			str = g_strdup("chuai");
			break;
		case 6622:
		case 6955:
		case 7516:
		case 7843:
		case 8413:
			str = g_strdup("chuan");
			break;
		case 6675:
			str = g_strdup("chuang");
			break;
		case 5879:
		case 7302:
		case 7319:
			str = g_strdup("chui");
			break;
		case 6127:
		case 8040:
		case 8277:
			str = g_strdup("chun");
			break;
		case 7401:
		case 8554:
		case 8626:
			str = g_strdup("chuo");
			break;
			str = g_strdup("ci");
			break;
		case 6075:
		case 6358:
		case 7684:
		case 8043:
		case 8457:
			str = g_strdup("4337 ËÅ");
			break;
		case 6042:
		case 6840:
		case 7085:
		case 7193:
		case 7214:
		case 7240:
			str = g_strdup("cong");
			break;
		case 7308:
		case 7403:
		case 7577:
			str = g_strdup("cou");
			break;
		case 6180:
		case 6562:
		case 6607:
		case 7367:
		case 8501:
		case 8530:
		case 8577:
			str = g_strdup("cu");
			break;
		case 5764:
		case 6305:
		case 7664:
		case 7973:
			str = g_strdup("cuan");
			break;
		case 6718:
		case 6145:
		case 6393:
		case 7213:
		case 7333:
		case 7505:
		case 8631:
			str = g_strdup("cui");
			break;
		case 6666:
		case 8169:
			str = g_strdup("cun");
			break;
		case 5640:
		case 6547:
		case 7566:
		case 7917:
		case 7983:
		case 8078:
		case 8526:
		case 8567:
			str = g_strdup("cuo");
			break;
		case 6239:
		case 6353:
		case 6410:
		case 6682:
		case 7007:
		case 8155:
		case 8346:
		case 8716:
		case 8718:
			str = g_strdup("da");
			break;
		case 6004:
		case 6316:
		case 6523:
		case 6942:
		case 7110:
		case 7173:
		case 8776:
			str = g_strdup("dai");
			break;
		case 5757:
		case 6144:
		case 6402:
		case 7373:
		case 7470:
		case 7781:
		case 8067:
		case 8087:
		case 8185:
		case 8376:
			str = g_strdup("dan");
			break;
		case 5852:
		case 5942:
		case 6148:
		case 6920:
		case 7724:
		case 7885:
		case 8141:
			str = g_strdup("dang");
			break;
		case 6322:
		case 6665:
		case 7514:
		case 8478:
			str = g_strdup("dao");
			break;
		case 7929:
			str = g_strdup("de");
			break;
		case 6466:
		case 6556:
		case 7413:
		case 7767:
		case 7975:
		case 8403:
			str = g_strdup("deng");
			break;
		case 5621:
		case 5765:
		case 5814:
		case 5848:
		case 5901:
		case 5970:
		case 6122:
		case 6454:
		case 7023:
		case 7116:
		case 7260:
		case 7306:
		case 7475:
		case 7738:
		case 7758:
		case 7791:
		case 7965:
		case 8438:
		case 8730:
			str = g_strdup("di");
			break;
		case 6439:
			str = g_strdup("dia");
			break;
		case 5871:
		case 5967:
		case 6559:
		case 7172:
		case 7868:
		case 8116:
		case 8118:
		case 8401:
		case 8558:
			str = g_strdup("dian");
			break;
		case 7886:
		case 8585:
		case 8684:
			str = g_strdup("diao");
			break;
		case 5976:
		case 6006:
		case 6273:
		case 6409:
		case 7526:
		case 8012:
		case 8183:
		case 8562:
		case 8688:
			str = g_strdup("die");
			break;
		case 5674:
		case 6404:
		case 7164:
		case 7575:
		case 7754:
		case 7814:
		case 8059:
		case 8184:
		case 8490:
			str = g_strdup("ding");
			break;
		case 7891:
			str = g_strdup("diu");
			break;
		case 5977:
		case 6343:
		case 6520:
		case 6528:
		case 7517:
		case 7543:
		case 7556:
		case 7747:
		case 8020:
			str = g_strdup("dong");
			break;
		case 6190:
		case 8128:
		case 8229:
		case 8391:
			str = g_strdup("dou");
			break;
		case 6022:
		case 6429:
		case 6834:
		case 7292:
		case 7525:
		case 8328:
		case 8338:
		case 8739:
		case 8782:
			str = g_strdup("du");
			break;
		case 7318:
		case 7649:
		case 8393:
			str = g_strdup("duan");
			break;
		case 7701:
		case 7713:
		case 7752:
			str = g_strdup("dui");
			break;
		case 6771:
		case 7632:
		case 7727:
		case 7766:
		case 7779:
		case 7970:
		case 8527:
			str = g_strdup("dun");
			break;
		case 6345:
		case 6365:
		case 6785:
		case 7122:
		case 7876:
		case 8154:
		case 8566:
			str = g_strdup("duo");
			break;
		case 5612:
		case 5832:
		case 5844:
		case 5949:
		case 6035:
		case 6113:
		case 6164:
		case 6332:
		case 6721:
		case 6977:
		case 7025:
		case 7378:
		case 7581:
		case 7916:
		case 7941:
		case 8042:
		case 8206:
		case 8689:
			str = g_strdup("e");
			break;
		case 6176:
		case 6284:
			str = g_strdup("en");
			break;
		case 5706:
		case 6939:
		case 7177:
		case 7879:
		case 8025:
		case 8660:
			str = g_strdup("er");
			break;
		case 5950:
		case 7732:
			str = g_strdup("fa");
			break;
		case 6212:
		case 6232:
		case 6506:
		case 7283:
		case 7660:
		case 7818:
		case 8576:
			str = g_strdup("fan");
			break;
		case 5890:
		case 7242:
		case 7853:
		case 8419:
		case 8648:
			str = g_strdup("fang");
			break;
		case 6032:
		case 6584:
		case 6713:
		case 6839:
		case 6990:
		case 7119:
		case 7328:
		case 7572:
		case 7619:
		case 7673:
		case 7948:
		case 8082:
		case 8267:
		case 8385:
		case 8468:
		case 8613:
		case 8678:
			str = g_strdup("fei");
			break;
		case 5739:
		case 6915:
		case 7291:
		case 8687:
		case 8787:
			str = g_strdup("fen");
			break;
		case 5726:
		case 5926:
		case 6155:
		case 6384:
		case 6767:
		case 7731:
			str = g_strdup("feng");
			break;
			str = g_strdup("fo");
			break;
		case 8330:
			str = g_strdup("fou");
			break;
		case 5775:
		case 5776:
		case 5914:
		case 6029:
		case 6062:
		case 6119:
		case 6142:
		case 6252:
		case 6327:
		case 6505:
		case 6686:
		case 6870:
		case 6985:
		case 7058:
		case 7066:
		case 7106:
		case 7108:
		case 7285:
		case 7471:
		case 7680:
		case 7741:
		case 7774:
		case 7775:
		case 7823:
		case 7991:
		case 8005:
		case 8222:
		case 8261:
		case 8280:
		case 8283:
		case 8479:
		case 8535:
		case 8538:
		case 8654:
		case 8691:
			str = g_strdup("fu");
			break;
		case 6246:
		case 7056:
		case 7057:
		case 7424:
		case 7837:
			str = g_strdup(" ga");
			break;
		case 5604:
		case 5875:
		case 5982:
		case 7414:
		case 7464:
			str = g_strdup("gai");
			break;
		case 5965:
		case 6053:
		case 6247:
		case 6306:
		case 6779:
		case 6838:
		case 6887:
		case 7104:
		case 7347:
		case 7426:
		case 7723:
		case 8065:
		case 8491:
			str = g_strdup("gan");
			break;
		case 7716:
		case 7824:
		case 8364:
			str = g_strdup("gang");
			break;
		case 5626:
		case 5830:
		case 5912:
		case 6227:
		case 7141:
		case 7332:
		case 7334:
		case 7429:
		case 7915:
			str = g_strdup("gao");
			break;
		case 5610:
		case 5678:
		case 5933:
		case 5957:
		case 6010:
		case 6435:
		case 7092:
		case 7501:
		case 7585:
		case 7749:
		case 7951:
		case 8143:
		case 8220:
		case 8420:
		case 8732:
			str = g_strdup("ge");
			break;
			str = g_strdup("gei");
			break;
		case 5608:
		case 6102:
		case 6371:
		case 8462:
			str = g_strdup("gen");
			break;
		case 6376:
		case 6657:
		case 7114:
		case 8665:
			str = g_strdup("geng");
			break;
		case 7178:
		case 7537:
		case 8228:
		case 8601:
			str = g_strdup("gong");
			break;
		case 5694:
		case 5824:
		case 6524:
		case 6960:
		case 7037:
		case 7135:
		case 7259:
		case 7477:
		case 7616:
		case 8349:
		case 8384:
		case 8724:
			str = g_strdup("gou");
			break;
		case 5637:
		case 5812:
		case 6152:
		case 6536:
		case 6773:
		case 7284:
		case 7379:
		case 7484:
		case 7486:
		case 7591:
		case 7617:
		case 7813:
		case 7825:
		case 7860:
		case 7932:
		case 8019:
		case 8083:
		case 8233:
		case 8494:
		case 8593:
		case 8681:
		case 8729:
			str = g_strdup("gu");
			break;
		case 5652:
		case 5820:
		case 6341:
		case 7273:
		case 7550:
		case 8027:
			str = g_strdup("gua");
			break;
			str = g_strdup("guai");
			break;
		case 5736:
		case 6124:
		case 6272:
		case 6842:
		case 7834:
		case 8057:
		case 8170:
		case 8704:
			str = g_strdup("guan");
			break;
		case 6359:
		case 6578:
		case 7270:
		case 7555:
			str = g_strdup("guang");
			break;
		case 5648:
		case 5659:
		case 6649:
		case 7003:
		case 7277:
		case 7433:
		case 7448:
		case 8007:
		case 8394:
		case 8657:
		case 8712:
			str = g_strdup("gui");
			break;
		case 5782:
		case 7121:
		case 7762:
		case 8671:
			str = g_strdup("gun");
			break;
		case 5769:
		case 6266:
		case 6335:
		case 6494:
		case 6538:
		case 6603:
		case 7304:
		case 7529:
		case 8188:
		case 8268:
		case 8269:
			str = g_strdup("guo");
			break;
		case 7894:
			str = g_strdup("ha");
			break;
		case 6443:
		case 7560:
		case 8516:
			str = g_strdup("hai");
			break;
		case 5885:
		case 6153:
		case 6294:
		case 6759:
		case 6911:
		case 7447:
		case 7642:
		case 8192:
		case 8205:
		case 8232:
		case 8793:
			str = g_strdup("han");
			break;
		case 6776:
		case 7112:
		case 8194:
			str = g_strdup("hang");
			break;
		case 6179:
		case 6222:
		case 6438:
		case 6467:
		case 6909:
		case 6916:
		case 7427:
		case 8009:
		case 8211:
		case 8226:
			str = g_strdup("hao");
			break;
		case 5813:
		case 5932:
		case 5954:
		case 6432:
		case 6756:
		case 7434:
		case 7833:
		case 8202:
		case 8234:
		case 8471:
			str = g_strdup("he");
			break;
			str = g_strdup("hei");
			break;
			str = g_strdup("hen");
			break;
		case 6231:
		case 7181:
		case 7276:
			str = g_strdup("heng");
			break;
		case 5768:
		case 5774:
		case 5807:
		case 6106:
		case 6214:
		case 6216:
		case 6740:
		case 6792:
			str = g_strdup("hong");
			break;
		case 6009:
		case 6565:
		case 6943:
		case 8090:
		case 8383:
		case 8455:
		case 8655:
		case 8731:
			str = g_strdup("hou");
			break;
		case 5792:
		case 6392:
		case 6481:
		case 6518:
		case 6609:
		case 6679:
		case 6717:
		case 6816:
		case 6879:
		case 7190:
		case 7346:
		case 7385:
		case 7618:
		case 7635:
		case 7646:
		case 7670:
		case 7672:
		case 7679:
		case 8013:
		case 8032:
		case 8041:
		case 8055:
		case 8343:
		case 8513:
		case 8590:
			str = g_strdup("hu");
			break;
		case 7072:
		case 7275:
		case 7725:
		case 7892:
			str = g_strdup("hua");
			break;
		case 8555:
			str = g_strdup("huai");
			break;
		case 5928:
		case 6140:
		case 6307:
		case 6487:
		case 6621:
		case 6801:
		case 6829:
		case 6881:
		case 6930:
		case 6953:
		case 7157:
		case 7944:
		case 8673:
		case 8763:
			str = g_strdup("huan");
			break;
		case 5882:
		case 6569:
		case 6850:
		case 6874:
		case 6956:
		case 7211:
		case 7533:
		case 8105:
		case 8308:
		case 8382:
		case 8692:
			str = g_strdup("huang");
			break;
		case 5822:
		case 6078:
		case 6086:
		case 6205:
		case 6352:
		case 6360:
		case 6425:
		case 6736:
		case 6807:
		case 6811:
		case 6971:
		case 7132:
		case 7185:
		case 7445:
		case 7703:
		case 8219:
		case 8319:
		case 8766:
			str = g_strdup("hui");
			break;
		case 5827:
		case 6638:
		case 6752:
		case 6867:
			str = g_strdup("hun");
			break;
		case 5669:
		case 6229:
		case 6311:
		case 6475:
		case 6623:
		case 7856:
		case 7933:
		case 7976:
		case 8175:
		case 8322:
			str = g_strdup("huo");
			break;
		case 5629:
		case 5632:
		case 5662:
		case 5705:
		case 5742:
		case 5952:
		case 6024:
		case 6033:
		case 6193:
		case 6210:
		case 6265:
		case 6320:
		case 6350:
		case 6383:
		case 6507:
		case 6553:
		case 6809:
		case 6976:
		case 7087:
		case 7160:
		case 7165:
		case 7314:
		case 7374:
		case 7410:
		case 7411:
		case 7469:
		case 7473:
		case 7487:
		case 7620:
		case 7722:
		case 7831:
		case 7990:
		case 8002:
		case 8104:
		case 8217:
		case 8337:
		case 8339:
		case 8463:
		case 8550:
		case 8611:
		case 8661:
		case 8674:
		case 8757:
		case 8768:
			str = g_strdup("ji");
			break;
		case 5704:
		case 5903:
		case 6171:
		case 6521:
		case 6804:
		case 6940:
		case 7176:
		case 7409:
		case 7546:
		case 7702:
		case 7882:
		case 7956:
		case 8072:
		case 8142:
		case 8244:
		case 8353:
		case 8434:
		case 8542:
			str = g_strdup("jia");
			break;
		case 5752:
		case 5841:
		case 5857:
		case 6149:
		case 6183:
		case 6286:
		case 6853:
		case 6931:
		case 6932:
		case 7144:
		case 7237:
		case 7305:
		case 7407:
		case 7415:
		case 7480:
		case 7489:
		case 7506:
		case 7576:
		case 7790:
		case 7921:
		case 8047:
		case 8148:
		case 8340:
		case 8469:
		case 8534:
		case 8561:
		case 8668:
		case 8721:
			str = g_strdup("jian");
			break;
		case 6092:
		case 6814:
		case 7113:
		case 7154:
		case 7481:
		case 7768:
		case 8180:
		case 8461:
		case 8488:
			str = g_strdup("jiang");
			break;
		case 5714:
		case 5753:
		case 6020:
		case 6090:
		case 6256:
		case 6461:
		case 6572:
		case 7015:
		case 7524:
		case 8008:
		case 8052:
		case 8252:
		case 8520:
		case 8551:
		case 8662:
			str = g_strdup("jiao");
			break;
		case 5806:
		case 5821:
		case 6255:
		case 6414:
		case 7028:
		case 7061:
		case 7278:
		case 7757:
		case 8060:
		case 8201:
		case 8227:
		case 8441:
		case 8658:
		case 8726:
			str = g_strdup("jie");
			break;
		case 5865:
		case 6103:
		case 6132:
		case 6468:
		case 6643:
		case 6659:
		case 7138:
		case 7210:
		case 7340:
		case 7465:
		case 7478:
		case 8138:
			str = g_strdup("jin");
			break;
		case 5751:
		case 5869:
		case 6128:
		case 6616:
		case 6729:
		case 6794:
		case 6941:
		case 6982:
		case 7026:
		case 7534:
		case 7554:
		case 7570:
		case 7626:
			str = g_strdup("jiang");
			break;
		case 6936:
		case 7671:
			str = g_strdup("jiong");
			break;
		case 5754:
		case 6417:
		case 6746:
		case 7249:
		case 7274:
		case 8015:
		case 8053:
		case 8481:
		case 8761:
			str = g_strdup("jiu");
			break;
		case 5738:
		case 5810:
		case 6036:
		case 6058:
		case 6076:
		case 6268:
		case 6965:
		case 6980:
		case 7202:
		case 7307:
		case 7316:
		case 7323:
		case 7357:
		case 7381:
		case 7488:
		case 7611:
		case 7850:
		case 7924:
		case 8022:
		case 8132:
		case 8153:
		case 8482:
		case 8522:
		case 8565:
		case 8620:
		case 8634:
		case 8722:
			str = g_strdup("ju");
			break;
		case 5918:
		case 6590:
		case 6824:
		case 7280:
		case 7835:
		case 7935:
		case 7952:
		case 8633:
			str = g_strdup("juan");
			break;
		case 5642:
		case 5667:
		case 5860:
		case 5939:
		case 6207:
		case 6421:
		case 6457:
		case 6469:
		case 6540:
		case 6617:
		case 7062:
		case 7169:
		case 7286:
		case 7351:
		case 7663:
		case 7967:
		case 8574:
		case 8591:
			str = g_strdup("jue");
			break;
		case 6260:
		case 8168:
		case 8362:
		case 8769:
			str = g_strdup("jun");
			break;
		case 5671:
		case 6339:
		case 7544:
			str = g_strdup("ka");
			break;
		case 5660:
		case 5978:
		case 6160:
		case 6673:
		case 6693:
		case 7888:
		case 7920:
		case 7939:
			str = g_strdup("kai");
			break;
		case 5709:
		case 6108:
		case 7412:
		case 7772:
		case 7811:
			str = g_strdup("kan");
			break;
		case 5688:
		case 6742:
		case 7854:
			str = g_strdup("kang");
			break;
		case 6974:
		case 7264:
		case 7491:
		case 7877:
			str = g_strdup("kao");
			break;
		case 6430:
		case 6519:
		case 6701:
		case 6859:
		case 7076:
		case 7128:
		case 7170:
		case 7380:
		case 7520:
		case 7807:
		case 7861:
		case 7930:
		case 7993:
		case 8066:
		case 8129:
		case 8204:
		case 8282:
		case 8733:
			str = g_strdup("ke");
			break;
		case 8144:
			str = g_strdup("ken");
			break;
		case 7912:
			str = g_strdup("keng");
			break;
		case 5737:
		case 6539:
		case 8377:
			str = g_strdup("kong");
			break;
		case 6050:
		case 6202:
		case 6321:
		case 7778:
		case 8356:
			str = g_strdup("kou");
			break;
		case 5658:
		case 6005:
		case 6423:
		case 7111:
		case 8728:
			str = g_strdup("ku");
			break;
		case 5708:
			str = g_strdup("kua");
			break;
		case 5665:
		case 5906:
		case 6364:
		case 6586:
		case 7558:
			str = g_strdup("kuai");
			break;
		case 8737:
			str = g_strdup("kuan");
			break;
		case 5818:
		case 5831:
		case 5887:
		case 5959:
		case 6237:
		case 6349:
		case 7094:
		case 7460:
			str = g_strdup("kuang");
			break;
		case 5624:
		case 5649:
		case 5771:
		case 6162:
		case 6281:
		case 6413:
		case 6416:
		case 6720:
		case 6951:
		case 7450:
		case 7805:
		case 8606:
		case 8743:
			str = g_strdup("kui");
			break;
		case 6204:
		case 6245:
		case 6458:
		case 6618:
		case 6928:
		case 7152:
		case 7841:
		case 8051:
			str = g_strdup("liao");
			break;
		case 5793:
		case 5988:
		case 6270:
		case 6354:
		case 6803:
		case 8483:
		case 8581:
		case 8764:
			str = g_strdup("lie");
			break;
		case 6194:
		case 6388:
		case 6555:
		case 6662:
		case 6733:
		case 6964:
		case 7361:
		case 7405:
		case 7602:
		case 7812:
		case 8452:
		case 8579:
		case 8775:
			str = g_strdup("lin");
			break;
		case 5925:
		case 6063:
		case 6342:
		case 6482:
		case 6786:
		case 7117:
		case 7258:
		case 7289:
		case 7418:
		case 8186:
		case 8240:
		case 8465:
		case 8676:
			str = g_strdup("ling");
			break;
		case 6815:
		case 6962:
		case 7082:
		case 7124:
		case 7628:
		case 7654:
		case 7919:
		case 7954:
		case 8050:
		case 8644:
			str = g_strdup("liu");
			break;
		case 5966:
		case 6055:
		case 6781:
		case 7171:
		case 7248:
		case 7542:
		case 7735:
		case 8110:
			str = g_strdup("long");
			break;
		case 5745:
		case 6168:
		case 6422:
		case 6548:
		case 7946:
		case 8092:
		case 8179:
		case 8287:
		case 8735:
			str = g_strdup("lou");
			break;
		case 6744:
		case 7321:
		case 7586:
		case 7918:
		case 7989:
		case 8158:
			str = g_strdup("l¨¹");
			break;
		case 5968:
		case 6303:
		case 6464:
		case 6782:
		case 6843:
		case 6885:
		case 6954:
		case 7220:
		case 7251:
		case 7354:
		case 7391:
		case 7404:
		case 7510:
		case 7545:
		case 7969:
		case 8021:
		case 8056:
		case 8392:
		case 8421:
		case 8652:
			str = g_strdup("lu");
			break;
		case 5785:
		case 7014:
		case 7279:
		case 8029:
		case 8639:
			str = g_strdup("luan");
			break;
			str = g_strdup("l¨µe");
			break;
			str = g_strdup("lun");
			break;
		case 5732:
		case 5789:
		case 6093:
		case 6259:
		case 6291:
		case 6604:
		case 6788:
		case 6880:
		case 7183:
		case 7301:
		case 7565:
		case 7961:
		case 8107:
		case 8635:
			str = g_strdup("luo");
			break;
		case 6328:
			str = g_strdup("m");
			break;
		case 6373:
		case 6579:
		case 7054:
		case 7231:
		case 8301:
			str = g_strdup("ma");
			break;
		case 5929:
		case 6104:
		case 8618:
			str = g_strdup("mai");
			break;
		case 6012:
		case 6503:
		case 7147:
		case 7655:
		case 7960:
		case 8209:
		case 8293:
		case 8709:
		case 8720:
			str = g_strdup("man");
			break;
		case 5888:
		case 6861:
		case 7743:
		case 8294:
			str = g_strdup("mang");
			break;
		case 5783:
		case 6066:
		case 6525:
		case 6787:
		case 7203:
		case 7436:
		case 7483:
		case 7503:
		case 7624:
		case 7714:
		case 7806:
		case 8317:
		case 8754:
			str = g_strdup("mao");
			break;
		case 6114:
		case 6550:
		case 6613:
		case 6828:
		case 6856:
		case 7325:
		case 7949:
		case 8044:
		case 8139:
		case 8740:
			str = g_strdup("mei");
			break;
		case 6249:
		case 7643:
		case 7715:
		case 7845:
			str = g_strdup("men");
			break;
		case 5934:
		case 6189:
		case 6211:
		case 6734:
		case 7592:
		case 7770:
		case 8221:
		case 8276:
		case 8323:
		case 8427:
		case 8431:
			str = g_strdup("meng");
			break;
		case 5634:
		case 5855:
		case 6234:
		case 6368:
		case 6455:
		case 6608:
		case 6772:
		case 6921:
		case 6984:
		case 7563:
		case 7682:
		case 8445:
		case 8767:
		case 8771:
			str = g_strdup("mi");
			break;
		case 6770:
		case 6837:
		case 6847:
		case 7579:
		case 7777:
			str = g_strdup("mian");
			break;
		case 6387:
		case 6967:
		case 7131:
		case 7149:
		case 7234:
		case 7721:
		case 7780:
		case 8037:
			str = g_strdup("miao");
			break;
		case 5631:
		case 6367:
		case 8326:
		case 8390:
			str = g_strdup("mie");
			break;
		case 6069:
		case 6526:
		case 6741:
		case 6793:
		case 7137:
		case 7168:
		case 7175:
		case 7710:
		case 8710:
		case 8628:
			str = g_strdup("min");
			break;
		case 5804:
		case 6088:
		case 6873:
		case 7452:
		case 7808:
		case 8504:
			str = g_strdup("ming");
			break;
			str = g_strdup("miu");
			break;
		case 5851:
		case 6052:
		case 6175:
		case 6641:
		case 7038:
		case 7366:
		case 7950:
		case 7987:
		case 8102:
		case 8182:
		case 8586:
		case 8588:
		case 8765:
			str = g_strdup("mo");
			break;
		case 5716:
		case 6372:
		case 7788:
		case 8254:
		case 8290:
		case 8642:
			str = g_strdup("mou");
			break;
		case 5679:
		case 5973:
		case 6057:
		case 6769:
		case 7504:
		case 7866:
			str = g_strdup("mu");
			break;
		case 6437:
			str = g_strdup("n");
			break;
		case 6264:
		case 7539:
		case 7953:
		case 8136:
			str = g_strdup("na");
			break;
		case 5630:
		case 6021:
		case 6133:
		case 7245:
			str = g_strdup("nai");
			break;
		case 6411:
		case 6478:
		case 6479:
		case 7310:
		case 7578:
		case 8279:
		case 8486:
			str = g_strdup("nan");
			break;
		case 6313:
		case 6476:
		case 6646:
		case 7457:
			str = g_strdup("nang");
			break;
		case 5611:
		case 5981:
		case 6346:
		case 6614:
		case 7207:
		case 7748:
		case 7883:
		case 8245:
			str = g_strdup("nao");
			break;
		case 5811:
			str = g_strdup("ne");
			break;
			str = g_strdup("nei");
			break;
		case 7705:
			str = g_strdup("nen");
			break;
			str = g_strdup("neng");
			break;
		case 5703:
		case 5972:
		case 6605:
		case 6685:
		case 7439:
		case 7627:
		case 7711:
		case 7794:
		case 7874:
		case 8682:
			str = g_strdup("ni");
			break;
		case 5605:
		case 5994:
		case 7393:
		case 8004:
		case 8651:
		case 8683:
			str = g_strdup("nian");
			break;
			str = g_strdup("niang");
			break;
		case 6064:
		case 7053:
		case 7569:
		case 8433:
			str = g_strdup("niao");
			break;
		case 5877:
		case 6233:
		case 6431:
		case 8208:
		case 8411:
		case 8570:
			str = g_strdup("nie");
			break;
			str = g_strdup("nin");
			break;
		case 5690:
		case 6344:
		case 6924:
		case 8187:
			str = g_strdup("ning");
			break;
		case 6580:
		case 6678:
		case 7004:
			str = g_strdup("niu");
			break;
		case 5715:
		case 6370:
			str = g_strdup("nong");
			break;
		case 8181:
			str = g_strdup("nou");
			break;
		case 6983:
		case 7032:
		case 7059:
		case 7069:
			str = g_strdup("nu");
			break;
		case 7704:
		case 7847:
		case 8412:
			str = g_strdup("n¨µ");
			break;
			str = g_strdup("nuan");
			break;
			str = g_strdup("nue");
			break;
		case 5748:
		case 6289:
		case 6386:
		case 7927:
			str = g_strdup("nuo");
			break;
		case 6424:
		case 6462:
			str = g_strdup("o");
			break;
		case 5809:
		case 6670:
		case 7417:
		case 8178:
			str = g_strdup("ou");
			break;
		case 6166:
		case 7243:
		case 8365:
			str = g_strdup("pa");
			break;
		case 5729:
		case 6169:
		case 6363:
			str = g_strdup("pai");
			break;
		case 6761:
		case 6790:
		case 8140:
		case 8165:
		case 8320:
		case 8571:
			str = g_strdup("pan");
			break;
		case 6561:
		case 6872:
		case 6944:
		case 8306:
			str = g_strdup("pang");
			break;
		case 6243:
		case 6583:
		case 6650:
		case 7567:
		case 8069:
			str = g_strdup("pao");
			break;
		case 6446:
		case 6490:
		case 7623:
		case 7934:
		case 8512:
		case 8612:
			str = g_strdup("pei");
			break;
		case 6852:
			str = g_strdup("pen");
			break;
		case 6001:
		case 6456:
		case 6681:
		case 8318:
			str = g_strdup("peng");
			break;
		case 5607:
		case 5682:
		case 5880:
		case 5892:
		case 5915:
		case 5960:
		case 6017:
		case 6037:
		case 6308:
		case 6472:
		case 6647:
		case 6836:
		case 7039:
		case 7102:
		case 7233:
		case 7422:
		case 7802:
		case 7828:
		case 7875:
		case 8117:
		case 8166:
		case 8223:
		case 8271:
		case 8589:
			str = g_strdup("pi");
			break;
		case 5850:
		case 7073:
		case 7490:
		case 7561:
		case 8470:
		case 8568:
			str = g_strdup("pian");
			break;
		case 5666:
		case 6449:
		case 7046:
		case 7146:
		case 7372:
		case 7809:
		case 8310:
			str = g_strdup("piao");
			break;
		case 6054:
		case 7513:
			str = g_strdup("pie");
			break;
		case 7041:
		case 6253:
		case 7016:
		case 7315:
		case 7482:
		case 8213:
			str = g_strdup("pin");
			break;
		case 5723:
		case 7019:
		case 7250:
		case 8650:
			str = g_strdup("ping");
			break;
		case 5647:
		case 5922:
		case 7174:
		case 7839:
		case 7862:
		case 8011:
		case 8345:
			str = g_strdup("po");
			break;
		case 5786:
		case 6269:
			str = g_strdup("pou");
			break;
		case 5773:
		case 6459:
		case 6863:
		case 6907:
		case 7217:
		case 7511:
		case 7968:
		case 7972:
		case 8575:
			str = g_strdup("pu");
			break;
		case 5633:
		case 5725:
		case 5963:
		case 6027:
		case 6046:
		case 6089:
		case 6129:
		case 6134:
		case 6161:
		case 6213:
		case 6366:
		case 6450:
		case 6508:
		case 6510:
		case 6764:
		case 6831:
		case 7075:
		case 7118:
		case 7187:
		case 7189:
		case 7229:
		case 7271:
		case 7342:
		case 7440:
		case 7605:
		case 7687:
		case 7712:
		case 7751:
		case 8193:
		case 8251:
		case 8264:
		case 8475:
		case 8476:
		case 8572:
		case 8702:
		case 8772:
			str = g_strdup("qi");
			break;
		case 6154:
		case 8736:
			str = g_strdup("qia");
			break;
		case 5727:
		case 5761:
		case 5868:
		case 6023:
		case 6045:
		case 6071:
		case 6271:
		case 6509:
		case 6705:
		case 6727:
		case 6925:
		case 6926:
		case 6929:
		case 7155:
		case 7293:
		case 7541:
		case 7709:
		case 7852:
		case 8215:
		case 8373:
			str = g_strdup("qian");
			break;
		case 6762:
		case 7045:
		case 7341:
		case 7408:
		case 7633:
		case 7926:
		case 7947:
		case 7974:
		case 8163:
		case 8262:
		case 8439:
		case 8536:
			str = g_strdup("qiang");
			break;
		case 5668:
		case 5829:
		case 5859:
		case 6081:
		case 6529:
		case 6724:
		case 6730:
		case 7352:
		case 7745:
		case 8546:
		case 8719:
			str = g_strdup("qiao");
			break;
		case 5907:
		case 6711:
		case 7010:
		case 7492:
		case 7938:
		case 8370:
			str = g_strdup("qie");
			break;
		case 6043:
		case 6276:
		case 6336:
		case 6426:
		case 6463:
		case 6858:
		case 7353:
		case 7923:
		case 8291:
		case 8432:
			str = g_strdup("qin");
			break;
		case 6060:
		case 6485:
		case 7349:
		case 7764:
		case 8263:
		case 8332:
		case 8368:
		case 8605:
		case 8675:
		case 8784:
			str = g_strdup("qing");
			break;
		case 5886:
		case 6068:
		case 8123:
		case 8243:
		case 8344:
		case 8528:
		case 8638:
			str = g_strdup("qiong");
			break;
		case 5720:
		case 5947:
		case 6576:
		case 6848:
		case 6947:
		case 6957:
		case 7317:
		case 7468:
		case 8216:
		case 8239:
		case 8288:
		case 8435:
		case 8460:
		case 8690:
		case 8792:
			str = g_strdup("qiu");
			break;
		case 5816:
		case 5930:
		case 6201:
		case 6230:
		case 6511:
		case 6573:
		case 6754:
		case 7219:
		case 7479:
		case 7512:
		case 7552:
		case 7678:
		case 7765:
		case 8119:
		case 8248:
		case 8329:
		case 8480:
		case 8636:
		case 8781:
			str = g_strdup("qu");
			break;
		case 5825:
		case 6085:
		case 6710:
		case 7125:
		case 7390:
		case 7816:
		case 7893:
		case 8273:
		case 8360:
		case 8760:
			str = g_strdup("quan");
			break;
		case 6755:
		case 6758:
		case 7708:
			str = g_strdup("que");
			break;
		case 6950:
			str = g_strdup("qun");
			break;
		case 6059:
		case 8237:
		case 8755:
			str = g_strdup("ran");
			break;
		case 7692:
		case 8006:
			str = g_strdup("rang");
			break;
		case 6073:
		case 7012:
		case 7267:
			str = g_strdup("rao");
			break;
			str = g_strdup("re");
			break;
		case 5680:
		case 6083:
		case 6156:
		case 6631:
		case 7377:
		case 7994:
		case 8137:
			str = g_strdup("ren");
			break;
			str = g_strdup("reng");
			break;
			str = g_strdup("ri");
			break;
		case 6541:
		case 6585:
		case 7337:
		case 7532:
		case 8278:
			str = g_strdup("rong");
			break;
		case 8459:
		case 8569:
		case 8723:
			str = g_strdup("rou");
			break;
		case 6174:
		case 6224:
		case 6473:
		case 6818:
		case 6865:
		case 6906:
		case 7140:
		case 7908:
		case 8164:
		case 8212:
			str = g_strdup("ru");
			break;
		case 7535:
			str = g_strdup("ruan");
			break;
		case 6039:
		case 6208:
		case 7236:
		case 7803:
		case 8224:
			str = g_strdup("rui");
			break;
			str = g_strdup("run");
			break;
		case 5728:
		case 8372:
			str = g_strdup("ruo");
			break;
		case 5606:
		case 5677:
		case 7493:
		case 7559:
		case 7610:
			str = g_strdup("sa");
			break;
		case 6471:
			str = g_strdup("sai");
			break;
		case 6644:
		case 7507:
		case 8454:
			str = g_strdup("san");
			break;
		case 6290:
		case 7763:
		case 8210:
			str = g_strdup("sang");
			break;
		case 6003:
		case 7150:
		case 7156:
		case 7593:
		case 8094:
		case 8694:
			str = g_strdup("sao");
			break;
			str = g_strdup("se");
			break;
			str = g_strdup("sen");
			break;
			str = g_strdup("seng");
			break;
		case 6394:
		case 7606:
		case 7901:
		case 8080:
		case 8436:
		case 8614:
		case 8672:
			str = g_strdup("sha");
			break;
		case 8507:
			str = g_strdup("shai");
			break;
		case 5663:
		case 5808:
		case 5923:
		case 5979:
		case 6047:
		case 6890:
		case 7009:
		case 7051:
		case 7083:
		case 7594:
		case 7844:
		case 8062:
		case 8321:
		case 8414:
		case 8539:
		case 8713:
			str = g_strdup("shan");
			break;
		case 5980:
		case 7120:
		case 7368:
		case 7656:
		case 8592:
			str = g_strdup("shang");
			break;
		case 5931:
		case 6070:
		case 6891:
		case 7228:
		case 8366:
		case 8425:
			str = g_strdup("shao");
			break;
		case 5639:
		case 5760:
		case 6606:
		case 6860:
		case 7608:
		case 7820:
		case 8774:
			str = g_strdup("she");
			break;
		case 5837:
		case 6123:
		case 6351:
		case 6841:
		case 7309:
		case 7547:
		case 7982:
		case 8255:
			str = g_strdup("shen");
			break;
		case 6551:
		case 7441:
		case 7782:
		case 8347:
			str = g_strdup("sheng");
			break;
		case 5854:
		case 5985:
		case 6110:
		case 6173:
		case 6317:
		case 7388:
		case 7459:
		case 7634:
		case 7870:
		case 8307:
		case 8334:
		case 8363:
		case 8525:
		case 8669:
		case 8685:
			str = g_strdup("shi");
			break;
		case 6587:
		case 7123:
		case 8428:
			str = g_strdup("shou");
			break;
		case 5731:
		case 5951:
		case 6136:
		case 6283:
		case 6780:
		case 6888:
		case 7013:
		case 7508:
		case 7582:
		case 7988:
			str = g_strdup("shu");
			break;
		case 6407:
			str = g_strdup("shua");
			break;
		case 8316:
			str = g_strdup("shuai");
			break;
		case 6737:
		case 6844:
			str = g_strdup("shuan");
			break;
		case 7055:
			str = g_strdup("shuang");
			break;
			str = g_strdup("shui");
			break;
			str = g_strdup("shun");
			break;
		case 6184:
		case 6287:
		case 6989:
		case 7335:
		case 7869:
			str = g_strdup("shuo");
			break;
		case 5643:
		case 5778:
		case 5944:
		case 6348:
		case 6765:
		case 6784:
		case 6889:
		case 7006:
		case 7065:
		case 7133:
		case 7675:
		case 7940:
		case 8024:
		case 8174:
		case 8247:
		case 8351:
			str = g_strdup("si");
			break;
		case 5801:
		case 6131:
		case 6534:
		case 6552:
		case 6676:
		case 6704:
		case 6833:
		case 8121:
			str = g_strdup("song");
			break;
		case 5937:
		case 6220:
		case 6418:
		case 6453:
		case 6640:
		case 6849:
		case 7612:
		case 7804:
		case 7943:
		case 8284:
			str = g_strdup("sou");
			break;
		case 5777:
		case 5853:
		case 6188:
		case 6428:
		case 6726:
		case 6819:
		case 8389:
		case 8602:
		case 8653:
			str = g_strdup("su");
			break;
		case 6601:
			str = g_strdup("suan");
			break;
		case 5839:
		case 6120:
		case 6901:
		case 6968:
		case 7661:
		case 7785:
		case 7801:
			str = g_strdup("sui");
			break;
		case 6105:
		case 6588:
		case 6624:
		case 7330:
		case 8632:
			str = g_strdup("sun");
			break;
		case 6379:
		case 6434:
		case 6442:
		case 7022:
		case 7288:
		case 7792:
		case 8440:
			str = g_strdup("suo");
			break;
		case 6743:
		case 6866:
		case 6961:
		case 7329:
		case 7719:
		case 7872:
		case 8533:
		case 8703:
			str = g_strdup("ta");
			break;
		case 5902:
		case 6223:
		case 6330:
		case 7070:
		case 7536:
		case 7638:
		case 7849:
		case 8544:
		case 8656:
			str = g_strdup("tai");
			break;
		case 5916:
		case 6903:
		case 7428:
		case 7694:
		case 7867:
		case 7936:
		case 8191:
			str = g_strdup("tan");
			break;
		case 5746:
		case 6491:
		case 6871:
		case 7209:
		case 7344:
		case 7906:
		case 7959:
		case 8177:
		case 8305:
		case 8311:
		case 8442:
		case 8517:
			str = g_strdup("tang");
			break;
		case 5627:
		case 6391:
		case 6812:
		case 7226:
		case 7666:
			str = g_strdup("tao");
			break;
			str = g_strdup("1845 ²Í");
			break;
		case 6315:
		case 7693:
		case 7911:
			str = g_strdup("te");
			break;
		case 7588:
			str = g_strdup("teng");
			break;
		case 5735:
		case 6709:
		case 6949:
		case 7130:
		case 8035:
		case 8151:
		case 8514:
			str = g_strdup("ti");
			break;
		case 6261:
		case 6735:
		case 6757:
		case 7369:
		case 7817:
			str = g_strdup("tian");
			break;
		case 5712:
		case 7686:
		case 8127:
		case 8272:
		case 8352:
		case 8448:
		case 8622:
		case 8670:
		case 8756:
			str = g_strdup("tiao");
			break;
		case 6138:
		case 8749:
			str = g_strdup("tie");
			break;
		case 6080:
		case 6167:
		case 7035:
		case 7272:
		case 7890:
		case 8249:
		case 8610:
			str = g_strdup("ting");
			break;
		case 5701:
		case 5758:
		case 6077:
		case 6444:
		case 6690:
		case 6892:
		case 7737:
			str = g_strdup("tong");
			break;
		case 7855:
		case 7822:
		case 8727:
			str = g_strdup("tou");
			break;
		case 6002:
		case 6117:
		case 6143:
		case 7842:
		case 8509:
			str = g_strdup("tu");
			break;
		case 6250:
		case 6972:
			str = g_strdup("tuan");
			break;
		case 7653:
			str = g_strdup("tui");
			break;
		case 5759:
		case 6629:
		case 7453:
		case 7564:
			str = g_strdup("tun");
			break;
		case 5617:
		case 5702:
		case 5971:
		case 6653:
		case 6791:
		case 7256:
		case 7262:
		case 7350:
		case 7740:
		case 8374:
		case 8502:
		case 8541:
		case 8630:
			str = g_strdup("tuo");
			break;
		case 5684:
		case 7020:
		case 7580:
			str = g_strdup("wa");
			break;
			str = g_strdup("wai");
			break;
		case 5664:
		case 6025:
		case 6150:
		case 7093:
		case 7126:
		case 7194:
		case 7568:
		case 7821:
		case 8274:
			str = g_strdup("wan");
			break;
		case 5672:
		case 6244:
		case 6715:
		case 7394:
		case 8745:
			str = g_strdup("wang");
			break;
		case 5743:
		case 5835:
		case 5881:
		case 5883:
		case 6158:
		case 6217:
		case 6488:
		case 6501:
		case 6543:
		case 6545:
		case 6611:
		case 6612:
		case 6739:
		case 6777:
		case 6802:
		case 6822:
		case 6952:
		case 7024:
		case 7166:
		case 7224:
		case 7406:
		case 7631:
		case 7648:
		case 8084:
		case 8426:
		case 8659:
			str = g_strdup("wei");
			break;
		case 5656:
		case 6751:
		case 6775:
		case 7223:
		case 8609:
			str = g_strdup("wen");
			break;
		case 6178:
		case 6219:
			str = g_strdup("weng");
			break;
		case 5733:
		case 6111:
		case 6502:
		case 6855:
		case 7531:
		case 7750:
		case 8627:
			str = g_strdup("wo");
			break;
		case 5603:
		case 5685:
		case 5867:
		case 5889:
		case 5956:
		case 6044:
		case 6377:
		case 6648:
		case 6668:
		case 6672:
		case 6820:
		case 6927:
		case 6935:
		case 6992:
		case 7036:
		case 7080:
		case 7227:
		case 7485:
		case 7641:
		case 8036:
		case 8045:
		case 8077:
		case 8258:
		case 8640:
		case 8789:
			str = g_strdup("wu");
			break;
		case 5750:
		case 5766:
		case 5884:
		case 5913:
		case 6130:
		case 6163:
		case 6191:
		case 6241:
		case 6381:
		case 6567:
		case 6630:
		case 6750:
		case 6827:
		case 6832:
		case 6979:
		case 7050:
		case 7184:
		case 7356:
		case 7456:
		case 7474:
		case 7604:
		case 7668:
		case 7689:
		case 7691:
		case 8010:
		case 8122:
		case 8265:
		case 8303:
		case 8312:
		case 8410:
		case 8424:
		case 8443:
		case 8449:
		case 8466:
		case 8521:
		case 8791:
			str = g_strdup("xi");
			break;
		case 6340:
		case 6582:
		case 6958:
		case 7206:
		case 7252:
		case 7744:
		case 8093:
		case 8333:
		case 8779:
			str = g_strdup("xia");
			break;
		case 5794:
		case 5823:
		case 6040:
		case 6118:
		case 6226:
		case 6513:
		case 6593:
		case 6963:
		case 7021:
		case 7515:
		case 7662:
		case 7676:
		case 8034:
		case 8079:
		case 8225:
		case 8358:
		case 8444:
		case 8503:
		case 8548:
		case 8549:
		case 8617:
			str = g_strdup("xian");
			break;
		case 6028:
		case 6157:
		case 6635:
		case 6652:
		case 7088:
		case 7129:
		case 8313:
		case 8663:
		case 8747:
			str = g_strdup("xiang");
			break;
		case 6356:
		case 6537:
		case 6876:
		case 6948:
		case 7071:
		case 7115:
		case 7241:
		case 7253:
		case 8257:
		case 8367:
		case 8379:
		case 8744:
			str = g_strdup("xiao");
			break;
		case 5741:
		case 5784:
		case 5936:
		case 5938:
		case 6215:
		case 6302:
		case 6619:
		case 6661:
		case 6845:
		case 6912:
		case 6966:
		case 7105:
		case 7151:
		case 7331:
		case 7339:
		case 8583:
			str = g_strdup("xie");
			break;
		case 5622:
		case 6016:
		case 7431:
		case 7607:
		case 8646:
			str = g_strdup("xin");
			break;
		case 5874:
		case 6084:
		case 6309:
		case 6712:
		case 7742:
			str = g_strdup("xing");
			break;
		case 6026:
			str = g_strdup("xiong");
			break;
		case 6361:
		case 6522:
		case 6642:
		case 6651:
		case 6869:
		case 8028:
		case 8587:
		case 8759:
			str = g_strdup("xiu");
			break;
		case 5828:
		case 5935:
		case 5955:
		case 6203:
		case 6810:
		case 6851:
		case 7179:
		case 7282:
		case 7667:
		case 7776:
		case 8167:
		case 8458:
		case 8515:
			str = g_strdup("xu");
			break;
		case 5756:
		case 5846:
		case 6170:
		case 6279:
		case 6789:
		case 6854:
		case 6886:
		case 7215:
		case 7324:
		case 7449:
		case 7637:
		case 7651:
		case 7759:
		case 7871:
		case 7964:
		case 8071:
			str = g_strdup("xuan");
			break;
		case 5842:
		case 7720:
		case 8529:
		case 8708:
			str = g_strdup("xue");
			break;
		case 5767:
		case 5908:
		case 5987:
		case 6087:
		case 6101:
		case 6206:
		case 6225:
		case 6530:
		case 6563:
		case 6620:
		case 6694:
		case 6813:
		case 6817:
		case 7454:
		case 8131:
		case 8524:
		case 8664:
			str = g_strdup("xun");
			break;
		case 5683:
		case 5975:
		case 6275:
		case 6512:
		case 6934:
		case 7011:
		case 7180:
		case 7266:
		case 7518:
		case 7728:
		case 7793:
		case 8073:
			str = g_strdup("ya");
			break;
		case 5641:
		case 5645:
		case 5718:
		case 5740:
		case 5780:
		case 5861:
		case 5917:
		case 5919:
		case 6030:
		case 6146:
		case 6535:
		case 6691:
		case 6738:
		case 6753:
		case 6846:
		case 6857:
		case 6991:
		case 7044:
		case 7192:
		case 7360:
		case 7444:
		case 7557:
		case 7645:
		case 7827:
		case 8359:
		case 8506:
		case 8742:
		case 8748:
		case 8790:
			str = g_strdup("yan");
			break;
		case 6564:
		case 6683:
		case 7630:
		case 7640:
		case 7706:
		case 8253:
		case 8717:
			str = g_strdup("yang");
			break;
		case 5618:
		case 5619:
		case 6326:
		case 6542:
		case 6570:
		case 7159:
		case 7182:
		case 7235:
		case 7387:
		case 7455:
		case 7540:
		case 7902:
		case 8046:
		case 8126:
		case 8477:
		case 8705:
			str = g_strdup("yao");
			break;
		case 5644:
		case 5843:
		case 5894:
		case 6262:
		case 7442:
		case 7639:
		case 7884:
			str = g_strdup("ye");
			break;
		case 5655:
		case 5657:
		case 5670:
		case 5693:
		case 5711:
		case 5817:
		case 5961:
		case 5992:
		case 6018:
		case 6051:
		case 6072:
		case 6218:
		case 6236:
		case 6240:
		case 6258:
		case 6314:
		case 6329:
		case 6355:
		case 6362:
		case 6441:
		case 6470:
		case 6527:
		case 6558:
		case 6602:
		case 6634:
		case 6688:
		case 6689:
		case 6708:
		case 6884:
		case 6938:
		case 7068:
		case 7143:
		case 7376:
		case 7383:
		case 7461:
		case 7629:
		case 7658:
		case 7784:
		case 7838:
		case 7955:
		case 7978:
		case 8074:
		case 8089:
		case 8115:
		case 8120:
		case 8270:
		case 8415:
		case 8464:
		case 8472:
		case 8493:
		case 8780:
			str = g_strdup("yi");
			break;
		case 5623:
		case 5920:
		case 5983:
		case 6007:
		case 6065:
		case 6337:
		case 6419:
		case 6594:
		case 6625:
		case 6806:
		case 7519:
		case 7887:
		case 8111:
		case 8230:
		case 8615:
		case 8624:
			str = g_strdup("yin");
			break;
		case 5788:
		case 5911:
		case 6067:
		case 6094:
		case 6126:
		case 6151:
		case 6186:
		case 6292:
		case 6451:
		case 6663:
		case 6862:
		case 6875:
		case 6913:
		case 7188:
		case 7212:
		case 7326:
		case 7584:
		case 8048:
		case 8108:
		case 8203:
		case 8331:
			str = g_strdup("ying");
			break;
		case 6401:
			str = g_strdup("yo");
			break;
		case 5724:
		case 5953:
		case 6013:
		case 6415:
		case 6728:
		case 7163:
		case 7962:
		case 8014:
		case 8711:
		case 8751:
			str = g_strdup("yong");
			break;
		case 5653:
		case 5692:
		case 5707:
		case 6112:
		case 6115:
		case 6121:
		case 6347:
		case 6483:
		case 6922:
		case 7254:
		case 7364:
		case 7527:
		case 7880:
		case 8064:
		case 8236:
		case 8242:
		case 8286:
		case 8647:
		case 8778:
		case 8788:
			str = g_strdup("you");
			break;
		case 5614:
		case 5625:
		case 5681:
		case 5722:
		case 5836:
		case 5845:
		case 6139:
		case 6187:
		case 6277:
		case 6484:
		case 6486:
		case 6546:
		case 6592:
		case 6632:
		case 6637:
		case 6655:
		case 6748:
		case 6987:
		case 6993:
		case 7005:
		case 7090:
		case 7204:
		case 7437:
		case 7476:
		case 7573:
		case 7603:
		case 7622:
		case 7647:
		case 7659:
		case 7718:
		case 7858:
		case 8033:
		case 8054:
		case 8085:
		case 8086:
		case 8130:
		case 8133:
		case 8266:
		case 8285:
		case 8336:
		case 8407:
		case 8408:
		case 8607:
		case 8625:
			str = g_strdup("yu");
			break;
		case 5989:
		case 6011:
		case 6282:
		case 6768:
		case 7034:
		case 7205:
		case 7358:
		case 7528:
		case 7783:
		case 8016:
		case 8302:
		case 8378:
		case 8629:
			str = g_strdup("yuan");
			break;
		case 5763:
		case 6914:
		case 7348:
		case 7530:
		case 7865:
			str = g_strdup("yue");
			break;
		case 5909:
		case 6031:
		case 6581:
		case 6702:
		case 6719:
		case 7101:
		case 7225:
		case 7370:
		case 7432:
		case 7521:
		case 7657:
			str = g_strdup("yun");
			break;
		case 6257:
		case 6338:
			str = g_strdup("za");
			break;
		case 6544:
		case 7162:
			str = g_strdup("zai");
			break;
		case 7222:
		case 7435:
		case 8402:
		case 8456:
		case 8485:
		case 8641:
			str = g_strdup("zan");
			break;
		case 6242:
		case 7064:
		case 7416:
			str = g_strdup("zang");
			break;
		case 6380:
			str = g_strdup("zao");
			break;
		case 5638:
		case 8369:
		case 5651:
		case 6385:
		case 6493:
		case 6937:
		case 7430:
		case 8348:
		case 8423:
			str = g_strdup("ze");
			break;
			str = g_strdup("zei");
			break;
		case 5858:
			str = g_strdup("zen");
			break;
		case 7153:
		case 7421:
		case 7832:
		case 7913:
			str = g_strdup("zeng");
			break;
		case 6610:
		case 6274:
		case 6324:
		case 6369:
		case 6378:
		case 7736:
		case 8068:
		case 8238:
		case 8794:
			str = g_strdup("zha");
			break;
		case 7746:
		case 8109:
			str = g_strdup("zhai");
			break;
		case 5862:
		case 6288:
		case 7625:
			str = g_strdup("zhan");
			break;
		case 5675:
		case 5921:
		case 6504:
		case 6554:
		case 6615:
		case 7049:
		case 7216:
		case 8315:
			str = g_strdup("zhang");
			break;
		case 5815:
		case 7294:
		case 7840:
		case 8341:
			str = g_strdup("zhao");
			break;
		case 5856:
		case 6301:
		case 7247:
		case 7392:
		case 7761:
		case 8049:
		case 8162:
		case 8256:
		case 8487:
			str = g_strdup("zhe");
			break;
		case 5958:
		case 6172:
		case 6805:
		case 7139:
		case 7269:
		case 7327:
		case 7384:
		case 7466:
		case 7551:
		case 7562:
		case 7685:
		case 7819:
		case 8001:
		case 8018:
		case 8380:
			str = g_strdup("zhen");
			break;
		case 5826:
		case 6531:
		case 6571:
		case 7859:
		case 7903:
		case 8361:
			str = g_strdup("zheng");
			break;
		case 5620:
		case 5876:
		case 5904:
		case 5990:
		case 6038:
		case 6293:
		case 6489:
		case 6669:
		case 6973:
		case 6975:
		case 7079:
		case 7246:
		case 7255:
		case 7257:
		case 7268:
		case 7382:
		case 7389:
		case 7462:
		case 7553:
		case 7589:
		case 7677:
		case 7683:
		case 7773:
		case 7984:
		case 8026:
		case 8075:
		case 8246:
		case 8474:
		case 8505:
		case 8537:
		case 8557:
		case 8560:
		case 8584:
		case 8603:
			str = g_strdup("zhi");
			break;
		case 5803:
		case 7981:
		case 8314:
		case 8417:
		case 8564:
			str = g_strdup("zhong");
			break;
		case 6107:
		case 6390:
		case 7008:
		case 7091:
		case 7107:
		case 7548:
		case 7756:
		case 8406:
		case 8492:
			str = g_strdup("zhou");
			break;
		case 5689:
		case 5710:
		case 5905:
		case 6049:
		case 6079:
		case 6808:
		case 6830:
		case 6883:
		case 7244:
		case 7338:
		case 7345:
		case 7636:
		case 7889:
		case 8070:
		case 8081:
		case 8335:
		case 8371:
		case 8422:
		case 8467:
		case 8578:
		case 8770:
			str = g_strdup("zhu");
			break;
			str = g_strdup("zhua");
			break;
			str = g_strdup("zhuai");
			break;
		case 6389:
		case 6645:
		case 8207:
			str = g_strdup("zhuan");
			break;
		case 5755:
			str = g_strdup("zhuang");
			break;
		case 6723:
		case 7077:
		case 7136:
			str = g_strdup("zhui");
			break;
		case 7538:
		case 8124:
			str = g_strdup("zhun");
			break;
		case 5730:
		case 5834:
		case 6310:
		case 6823:
		case 6835:
		case 6910:
		case 7644:
		case 7690:
		case 7729:
		case 7977:
			str = g_strdup("zhuo");
			break;
		case 5849:
		case 6549:
		case 7002:
		case 7060:
		case 7127:
		case 7287:
		case 7402:
		case 7463:
		case 7707:
		case 7786:
		case 7937:
		case 7986:
		case 8172:
		case 8342:
		case 8450:
		case 8484:
		case 8594:
		case 8604:
		case 8623:
		case 8686:
		case 8758:
			str = g_strdup("zi");
			break;
		case 5744:
		case 7574:
		case 8453:
			str = g_strdup("zong");
			break;
		case 5833:
		case 5878:
		case 5924:
		case 7067:
		case 8677:
			str = g_strdup("zou");
			break;
		case 5762:
		case 6147:
		case 7963:
			str = g_strdup("zu");
			break;
		case 6312:
		case 7158:
		case 8582:
			str = g_strdup("zuan");
			break;
		case 6209:
			str = g_strdup("zui");
			break;
		case 6304:
		case 7355:
		case 8714:
			str = g_strdup("zun");
			break;
		case 5872:
		case 6382:
		case 6460:
		case 6684:
		case 7549:
		case 7681:
			str = g_strdup("zuo");
			break;
		default:
			if(ncode>=1601 && ncode<=1602)
			{
				str = g_strdup("a");
				break;
			}
			if(ncode>=1603 && ncode<=1615)
			{
				str = g_strdup("ai");
				break;
			}
			if(ncode>=1616 && ncode<=1624)
			{
				str = g_strdup("an");
				break;
			}
			if(ncode>=1625 && ncode<=1627)
			{
				str = g_strdup("ang");
				break;
			}
			if(ncode>=1628 && ncode<=1636)
			{
				str = g_strdup("ao");
				break;
			}
			if(ncode>=1637 && ncode<=1654)
			{
				str = g_strdup("ba");
				break;
			}
			if(ncode>=1655 && ncode<=1662)
			{
				str = g_strdup("bai");
				break;
			}
			if(ncode>=1663 && ncode<=1677)
			{
				str = g_strdup("ban");
				break;
			}
			if(ncode>=1678 && ncode<=1689)
			{
				str = g_strdup("bang");
				break;
			}
			if(ncode>=1690 && ncode<=1712)
			{
				str = g_strdup("bao");
				break;
			}
			if(ncode>=1713 && ncode<=1727)
			{
				str = g_strdup("bei");
				break;
			}
			if(ncode>=1728 && ncode<=1731)
			{
				str = g_strdup("ben");
				break;
			}
			if(ncode>=1732 && ncode<=1737)
			{
				str = g_strdup("beng");
				break;
			}
			if(ncode>1738 && ncode<=1761)
			{
				str = g_strdup("bi");
				break;
			}
			if(ncode>=1762 && ncode<=1773)
			{
				str = g_strdup("bian");
				break;
			}
			if(ncode>=1774 && ncode<=1777)
			{
				str = g_strdup("biao");
				break;
			}
			if(ncode>=1778 && ncode<=1781)
			{
				str = g_strdup("bie");
				break;
			}
			if(ncode>=1782 && ncode<=1787)
			{
				str = g_strdup("bin");
				break;
			}
			if(ncode>=1788 && ncode<=1794)
			{
				str = g_strdup("bing");
				break;
			}
			if(ncode>=1801 && ncode<=1802)
			{
				str = g_strdup("bing");
				break;
			}
			if(ncode>=1803 && ncode<=1821)
			{
				str = g_strdup("bo");
				break;
			}
			if(ncode>=1822 && ncode<=1832)
			{
				str = g_strdup("bu");
				break;
			}
			if(ncode==1833)
			{
				str = g_strdup("ca");
				break;
			}
			if(ncode>=1834 && ncode<=1844)
			{
				str = g_strdup("cai");
				break;
			}
			if(ncode>=1845 && ncode<=1851)
			{
				str = g_strdup("can");
				break;
			}
			if(ncode>=1852 && ncode<=1856)
			{
				str = g_strdup("cang");
				break;
			}
			if(ncode>=1857 && ncode<=1861)
			{
				str = g_strdup("cao");
				break;
			}
			if(ncode>=1862 && ncode<=1866)
			{
				str = g_strdup("ce");
				break;
			}
			if(ncode>=1867 && ncode<=1868)
			{
				str = g_strdup("ceng");
				break;
			}
			if(ncode>=1869 && ncode<=1879)
			{
				str = g_strdup("cha");
				break;
			}
			if(ncode>=1880 && ncode<=1882)
			{
				str = g_strdup("chai");
				break;
			}
			if(ncode>=1883 && ncode<=1892)
			{
				str = g_strdup("chan");
				break;
			}
			if(ncode>=1893 && ncode<=1911)
			{
				str = g_strdup("chang");
				break;
			}
			if(ncode>=1912 && ncode<=1920)
			{
				str = g_strdup("chao");
				break;
			}
			if(ncode>=1921 && ncode<=1926)
			{
				str = g_strdup("che");
				break;
			}
			if(ncode>=1927 && ncode<=1936)
			{
				str = g_strdup("chen");
				break;
			}
			if(ncode>=1937 && ncode<=1951)
			{
				str = g_strdup("cheng");
				break;
			}
			if(ncode>=1952 && ncode<=1967)
			{
				str = g_strdup("chi");
				break;
			}
			if(ncode>=1968 && ncode<=1972)
			{
				str = g_strdup("chong");
				break;
			}
			if(ncode>=1973 && ncode<=1984)
			{
				str = g_strdup("chou");
				break;
			}
			if(ncode>=1985 && ncode<=2006)
			{
				str = g_strdup("chu");
				break;
			}
			if(ncode==2007)
			{
				str = g_strdup("chuai");
				break;
			}
			if(ncode>=2008 && ncode<=2014)
			{
				str = g_strdup("chuan");
				break;
			}
			if(ncode>=2015 && ncode<=2020)
			{
				str = g_strdup("chuang");
				break;
			}
			if(ncode>=2021 && ncode<=2025)
			{
				str = g_strdup("chui");
				break;
			}
			if(ncode>=2026 && ncode<=2032)
			{
				str = g_strdup("chun");
				break;
			}
			if(ncode>=2033 && ncode<=2034)
			{
				str = g_strdup("chuo");
				break;
			}
			if(ncode>=2035 && ncode<=2046)
			{
				str = g_strdup("ci");
				break;
			}
			if(ncode>=2047 && ncode<=2052)
			{
				str = g_strdup("cong");
				break;
			}
			if(ncode>=2054 && ncode<=2057)
			{
				str = g_strdup("cu");
				break;
			}
			if(ncode>=2058 && ncode<=2060)
			{
				str = g_strdup("cuan");
				break;
			}
			if(ncode>=2061 && ncode<=2068)
			{
				str = g_strdup("cui");
				break;
			}
			if(ncode>=2069 && ncode<=2071)
			{
				str = g_strdup("cun");
				break;
			}
			if(ncode>=2072 && ncode<=2077)
			{
				str = g_strdup("cuo");
				break;
			}
			if(ncode>=2078 && ncode<=2083)
			{
				str = g_strdup("da");
				break;
			}
			if(ncode>=2084 && ncode<=2094)
			{
				str = g_strdup("dai");
				break;
			}
			if(ncode>=2102 && ncode<=2116)
			{
				str = g_strdup("dan");
				break;
			}
			if(ncode>=2117 && ncode<=2121)
			{
				str = g_strdup("dang");
				break;
			}
			if(ncode>=2122 && ncode<=2133)
			{
				str = g_strdup("dao");
				break;
			}
			if(ncode>=2134 && ncode<=2136)
			{
				str = g_strdup("de");
				break;
			}
			if(ncode>=2137 && ncode<=2143)
			{
				str = g_strdup("deng");
				break;
			}
			if(ncode>=2144 && ncode<=2162)
			{
				str = g_strdup("di");
				break;
			}
			if(ncode>=2163 && ncode<=2178)
			{
				str = g_strdup("dian");
				break;
			}
			if(ncode>=2179 && ncode<=2187)
			{
				str = g_strdup("diao");
				break;
			}
			if(ncode>=2188 && ncode<=2194)
			{
				str = g_strdup("die");
				break;
			}
			if(ncode>=2201 && ncode<=2209)
			{
				str = g_strdup("ding");
				break;
			}
			if(ncode==2210)
			{
				str = g_strdup("diu");
				break;
			}
			if(ncode>=2211 && ncode<=2220)
			{
				str = g_strdup("dong");
				break;
			}
			if(ncode>=2221 && ncode<=2227)
			{
				str = g_strdup("dou");
				break;
			}
			if(ncode>=2228 && ncode<=2242)
			{
				str = g_strdup("du");
				break;
			}
			if(ncode>=2243 && ncode<=2248)
			{
				str = g_strdup("duan");
				break;
			}
			if(ncode>=2249 && ncode<=2252)
			{
				str = g_strdup("dui");
				break;
			}
			if(ncode>=2253 && ncode<=2261)
			{
				str = g_strdup("dun");
				break;
			}
			if(ncode>=2262 && ncode<=2273)
			{
				str = g_strdup("duo");
				break;
			}
			if(ncode>=2274 && ncode<=2286)
			{
				str = g_strdup("e");
				break;
			}
			if(ncode==2287)
			{
				str = g_strdup("en");
				break;
			}
			if(ncode>=2288 && ncode<=2231)
			{
				str = g_strdup("er");
				break;
			}
			if(ncode>=2302 && ncode<=2309)
			{
				str = g_strdup("fa");
				break;
			}
			if(ncode>=2310 && ncode<=2326)
			{
				str = g_strdup("fan");
				break;
			}
			if(ncode>=2327 && ncode<=2337)
			{
				str = g_strdup("fang");
				break;
			}
			if(ncode>=2338 && ncode<=2349)
			{
				str = g_strdup("fei");
				break;
			}
			if(ncode>=2350 && ncode<=2364)
			{
				str = g_strdup("fen");
				break;
			}
			if(ncode>=2365 && ncode<=2379)
			{
				str = g_strdup("feng");
				break;
			}
			if(ncode==2380)
			{
				str = g_strdup("fo");
				break;
			}
			if(ncode==2381)
			{
				str = g_strdup("fou");
				break;
			}
			if(ncode>=2382 && ncode<=2432)
			{
				str = g_strdup("fu");
				break;
			}
			if(ncode>=2435 && ncode<=2440)
			{
				str = g_strdup("gai");
				break;
			}
			if(ncode>=2441 && ncode<=2451)
			{
				str = g_strdup("gan");
				break;
			}
			if(ncode>=2452 && ncode<=2460)
			{
				str = g_strdup("gang");
				break;
			}
			if(ncode>=2461 && ncode<=2470)
			{
				str = g_strdup("gao");
				break;
			}
			if(ncode>=2471 && ncode<=2487)
			{
				str = g_strdup("ge");
				break;
			}
			if(ncode==2488)
			{
				str = g_strdup("gei");
				break;
			}
			if(ncode>=2489 && ncode<=2490)
			{
				str = g_strdup("gen");
				break;
			}
			if(ncode>=2491 && ncode<=2503)
			{
				str = g_strdup("geng");
				break;
			}
			if(ncode>=2504 && ncode<=2518)
			{
				str = g_strdup("gong");
				break;
			}
			if(ncode>=2519 && ncode<=2527)
			{
				str = g_strdup("gou");
				break;
			}
			if(ncode>=2528 && ncode<=2545)
			{
				str = g_strdup("gu");
				break;
			}
			if(ncode>=2546 && ncode<=2551)
			{
				str = g_strdup("gua");
				break;
			}
			if(ncode>=2552 && ncode<=2554)
			{
				str = g_strdup("guai");
				break;
			}
			if(ncode>=2555 && ncode<=2565)
			{
				str = g_strdup("guan");
				break;
			}
			if(ncode>=2566 && ncode<=2568)
			{
				str = g_strdup("guang");
				break;
			}
			if(ncode>=2569 && ncode<=2584)
			{
				str = g_strdup("gui");
				break;
			}
			if(ncode>=2585 && ncode<=2587)
			{
				str = g_strdup("gun");
				break;
			}
			if(ncode>=2588 && ncode<=2593)
			{
				str = g_strdup("guo");
				break;
			}
			if(ncode==2594)
			{
				str = g_strdup("ha");
				break;
			}
			if(ncode>=2601 && ncode<=2607)
			{
				str = g_strdup("hai");
				break;
			}
			if(ncode>=2608 && ncode<=2626)
			{
				str = g_strdup("han");
				break;
			}
			if(ncode>=2627 && ncode<=2629)
			{
				str = g_strdup("hang");
				break;
			}
			if(ncode>=2630 && ncode<=2638)
			{
				str = g_strdup("hao");
				break;
			}
			if(ncode>=2639 && ncode<=2656)
			{
				str = g_strdup("he");
				break;
			}
			if(ncode>=2657 && ncode<=2658)
			{
				str = g_strdup("hei");
				break;
			}
			if(ncode>=2659 && ncode<=2662)
			{
				str = g_strdup("hen");
				break;
			}
			if(ncode>=2663 && ncode<=2667)
			{
				str = g_strdup("heng");
				break;
			}
			if(ncode>=2668 && ncode<=2676)
			{
				str = g_strdup("hong");
				break;
			}
			if(ncode>=2677 && ncode<=2683)
			{
				str = g_strdup("hou");
				break;
			}
			if(ncode>=2684 && ncode<=2707)
			{
				str = g_strdup("hu");
				break;
			}
			if(ncode>=2708 && ncode<=2716)
			{
				str = g_strdup("hua");
				break;
			}
			if(ncode>=2717 && ncode<=2721)
			{
				str = g_strdup("huai");
				break;
			}
			if(ncode>=2722 && ncode<=2735)
			{
				str = g_strdup("huan");
				break;
			}
			if(ncode>=2736 && ncode<=2749)
			{
				str = g_strdup("huang");
				break;
			}
			if(ncode>=2750 && ncode<=2770)
			{
				str = g_strdup("hui");
				break;
			}
			if(ncode>=2771 && ncode<=2776)
			{
				str = g_strdup("hun");
				break;
			}
			if(ncode>=2777 && ncode<=2786)
			{
				str = g_strdup("huo");
				break;
			}
			if(ncode>=2787 && ncode<=2845)
			{
				str = g_strdup("ji");
				break;
			}
			if(ncode>=2846 && ncode<=2862)
			{
				str = g_strdup("jia");
				break;
			}
			if(ncode>=2863 && ncode<=2908)
			{
				str = g_strdup("jian");
				break;
			}
			if(ncode>=2909 && ncode<=2921)
			{
				str = g_strdup("jiang");
				break;
			}
			if(ncode>=2922 && ncode<=2949)
			{
				str = g_strdup("jiao");
				break;
			}
			if(ncode>=2950 && ncode<=2976)
			{
				str = g_strdup("jie");
				break;
			}
			if(ncode>=2977 && ncode<=3002)
			{
				str = g_strdup("jin");
				break;
			}
			if(ncode>=3003 && ncode<=3027)
			{
				str = g_strdup("jing");
				break;
			}
			if(ncode>=3028 && ncode<=3029)
			{
				str = g_strdup("jiong");
				break;
			}
			if(ncode>=3030 && ncode<=3046)
			{
				str = g_strdup("jiu");
				break;
			}
			if(ncode>=3047 && ncode<=3071)
			{
				str = g_strdup("ju");
				break;
			}
			if(ncode>=3072 && ncode<=3078)
			{
				str = g_strdup("juan");
				break;
			}
			if(ncode>=3079 && ncode<=3088)
			{
				str = g_strdup("jue");
				break;
			}
			if(ncode>=3089 && ncode<=3105)
			{
				str = g_strdup("jun");
				break;
			}
			if(ncode>=3106 && ncode<=3109)
			{
				str = g_strdup("ka");
				break;
			}
			if(ncode>=3110 && ncode<=3114)
			{
				str = g_strdup("kai");
				break;
			}
			if(ncode>=3115 && ncode<=3120)
			{
				str = g_strdup("kan");
				break;
			}
			if(ncode>=3121 && ncode<=3127)
			{
				str = g_strdup("kang");
				break;
			}
			if(ncode>=3128 && ncode<=3131)
			{
				str = g_strdup("kao");
				break;
			}
			if(ncode>=3132 && ncode<=3146)
			{
				str = g_strdup("ke");
				break;
			}
			if(ncode>=3147 && ncode<=3150)
			{
				str = g_strdup("ken");
				break;
			}
			if(ncode>=3151 && ncode<=3152)
			{
				str = g_strdup("keng");
				break;
			}
			if(ncode>=3153 && ncode<=3156)
			{
				str = g_strdup("kong");
				break;
			}
			if(ncode>=3157 && ncode<=3160)
			{
				str = g_strdup("kou");
				break;
			}
			if(ncode>=3161 && ncode<=3167)
			{
				str = g_strdup("ku");
				break;
			}
			if(ncode>=3168 && ncode<=3172)
			{
				str = g_strdup("kua");
				break;
			}
			if(ncode>=3173 && ncode<=3176)
			{
				str = g_strdup("kuai");
				break;
			}
			if(ncode>=3177 && ncode<=3178)
			{
				str = g_strdup("kuan");
				break;
			}
			if(ncode>=3179 && ncode<=3186)
			{
				str = g_strdup("kuang");
				break;
			}
			if(ncode>=3187 && ncode<=3203)
			{
				str = g_strdup("kui");
				break;
			}
			if(ncode>=3204 && ncode<=3207)
			{
				str = g_strdup("kun");
				break;
			}
			if(ncode>=3208 && ncode<=3211)
			{
				str = g_strdup("kuo");
				break;
			}
			if(ncode>=3212 && ncode<=3218)
			{
				str = g_strdup("la");
				break;
			}
			if(ncode>=3219 && ncode<=3221)
			{
				str = g_strdup("lai");
				break;
			}
			if(ncode>=3222 && ncode<=3236)
			{
				str = g_strdup("lan");
				break;
			}
			if(ncode>=3237 && ncode<=3243)
			{
				str = g_strdup("lang");
				break;
			}
			if(ncode>=3244 && ncode<=3252)
			{
				str = g_strdup("lao");
				break;
			}
			if(ncode>=3253 && ncode<=3254)
			{
				str = g_strdup("le");
				break;
			}
			if(ncode>=3255 && ncode<=3265)
			{
				str = g_strdup("lei");
				break;
			}
			if(ncode>=3266 && ncode<=3268)
			{
				str = g_strdup("leng");
				break;
			}
			if(ncode>=3269 && ncode<=3308)
			{
				str = g_strdup("li");
			}
			if(ncode==3309)
			{
				str = g_strdup("lia");
				break;
			}
			if(ncode>=3310 && ncode<=3323)
			{
				str = g_strdup("lian");
				break;
			}
			if(ncode>=3324 && ncode<=3334)
			{
				str = g_strdup("liang");
				break;
			}
			if(ncode>=3335 && ncode<=3347)
			{
				str = g_strdup("liao");
				break;
			}
			if(ncode>=3348 && ncode<=3352)
			{
				str = g_strdup("lie");
				break;
			}
			if(ncode>=3353 && ncode<=3363)
			{
				str = g_strdup("lin");
				break;
			}
			if(ncode>=3364 && ncode<=3378)
			{
				str = g_strdup("ling");
				break;
			}
			if(ncode>=3379 && ncode<=3389)
			{
				str = g_strdup("liu");
				break;
			}
			if(ncode>=3390 && ncode<=3404)
			{
				str = g_strdup("long");
				break;
			}
			if(ncode>=3405 && ncode<=3410)
			{
				str = g_strdup("lou");
				break;
			}
			if(ncode>=3411 && ncode<=3444)
			{
				str = g_strdup("lu");
				break;
			}
			if(ncode>=3445 && ncode<=3450)
			{
				str = g_strdup("luan");
				break;
			}
			if(ncode>=3451 && ncode<=3452)
			{
				str = g_strdup("lue");
				break;
			}
			if(ncode>=3453 && ncode<=3459)
			{
				str = g_strdup("lun");
				break;
			}
			if(ncode>=3460 && ncode<=3471)
			{
				str = g_strdup("luo");
				break;
			}
			if(ncode>=3472 && ncode<=3480)
			{
				str = g_strdup("ma");
				break;
			}
			if(ncode>=3481 && ncode<=3486)
			{
				str = g_strdup("mai");
				break;
			}
			if(ncode>=3487 && ncode<=3501)
			{
				str = g_strdup("man");
				break;
			}
			if(ncode>=3502 && ncode<=3507)
			{
				str = g_strdup("mang");
				break;
			}
			if(ncode>=3508 && ncode<=3519)
			{
				str = g_strdup("mao");
				break;
			}
			if(ncode==3520)
			{
				str = g_strdup("me");
				break;
			}
			if(ncode>=3521 && ncode<=3536)
			{
				str = g_strdup("mei");
				break;
			}
			if(ncode>=3537 && ncode<=3539)
			{
				str = g_strdup("men");
				break;
			}
			if(ncode>=3540 && ncode<=3547)
			{
				str = g_strdup("meng");
				break;
			}
			if(ncode>=3548 && ncode<=3561)
			{
				str = g_strdup("mi");
			}
			if(ncode>=3562 && ncode<=3570)
			{
				str = g_strdup("mian");
				break;
			}
			if(ncode>=3571 && ncode<=3578)
			{
				str = g_strdup("miao");
				break;
			}
			if(ncode>=3579 && ncode<=3580)
			{
				str = g_strdup("mie");
				break;
			}
			if(ncode>=3581 && ncode<=3586)
			{
				str = g_strdup("min");
				break;
			}
			if(ncode>=3587 && ncode<=3592)
			{
				str = g_strdup("ming");
				break;
			}
			if(ncode==3593)
			{
				str = g_strdup("miu");
				break;
			}
			if(ncode>=3594 && ncode<=3616)
			{
				str = g_strdup("mo");
				break;
			}
			if(ncode>=3617 && ncode<=3619)
			{
				str = g_strdup("mou");
				break;
			}
			if(ncode>=3620 && ncode<=3634)
			{
				str = g_strdup("mu");
				break;
			}
			if(ncode>=3635 && ncode<=3641)
			{
				str = g_strdup("na");
				break;
			}
			if(ncode>=3642 && ncode<=3646)
			{
				str = g_strdup("nai");
				break;
			}
			if(ncode>=3647 && ncode<=3649)
			{
				str = g_strdup("nan");
				break;
			}
			if(ncode==3650)
			{
				str = g_strdup("nang");
				break;
			}
			if(ncode>=3651 && ncode<=3655)
			{
				str = g_strdup("nao");
				break;
			}
			if(ncode==3656)
			{
				str = g_strdup("ne");
				break;
			}
			if(ncode>=3657 && ncode<=3658)
			{
				str = g_strdup("nei");
				break;
			}
			if(ncode==3659)
			{
				str = g_strdup("nen");
				break;
			}
			if(ncode==3660)
			{
				str = g_strdup("neng");
				break;
			}
			if(ncode>=3661 && ncode<=3671)
			{
				str = g_strdup("ni");
				break;
			}
			if(ncode>=3672 && ncode<=3678)
			{
				str = g_strdup("nian");
				break;
			}
			if(ncode>=3679 && ncode<=3680)
			{
				str = g_strdup("niang");
				break;
			}
			if(ncode>=3681 && ncode<=3682)
			{
				str = g_strdup("niao");
				break;
			}
			if(ncode>=3683 && ncode<=3689)
			{
				str = g_strdup("nie");
				break;
			}
			if(ncode==3690)
			{
				str = g_strdup("nin");
				break;
			}
			if(ncode>=3691 && ncode<=3702)
			{
				str = g_strdup("ning");
				break;
			}
			if(ncode>=3703 && ncode<=3706)
			{
				str = g_strdup("niu");
				break;
			}
			if(ncode>=3707 && ncode<=3710)
			{
				str = g_strdup("nong");
				break;
			}
			if(ncode>=3711 && ncode<=3714)
			{
				str = g_strdup("nu");
				break;
			}
			if(ncode==3715)
			{
				str = g_strdup("nuan");
				break;
			}
			if(ncode>=3716 && ncode<=3717)
			{
				str = g_strdup("nue");
				break;
			}
			if(ncode>=3718 && ncode<=3721)
			{
				str = g_strdup("nuo");
				break;
			}
			if(ncode==3722)
			{
				str = g_strdup("o");
				break;
			}
			if(ncode>=3723 && ncode<=3729)
			{
				str = g_strdup("ou");
				break;
			}
			if(ncode>=3730 && ncode<=3735)
			{
				str = g_strdup("pa");
				break;
			}
			if(ncode>=3736 && ncode<=3741)
			{
				str = g_strdup("pai");
				break;
			}
			if(ncode>=3742 && ncode<=3749)
			{
				str = g_strdup("pan");
				break;
			}
			if(ncode>=3750 && ncode<=3754)
			{
				str = g_strdup("pang");
				break;
			}
			if(ncode>=3755 && ncode<=3761)
			{
				str = g_strdup("pao");
				break;
			}
			if(ncode>=3762 && ncode<=3770)
			{
				str = g_strdup("pei");
				break;
			}
			if(ncode>=3771 && ncode<=3772)
			{
				str = g_strdup("pen");
				break;
			}
			if(ncode>=3773 && ncode<=3786)
			{
				str = g_strdup("peng");
				break;
			}
			if(ncode>=3787 && ncode<=3809)
			{
				str = g_strdup("pi");
				break;
			}
			if(ncode>=3810 && ncode<=3813)
			{
				str = g_strdup("pian");
				break;
			}
			if(ncode>=3814 && ncode<=3817)
			{
				str = g_strdup("piao");
				break;
			}
			if(ncode>=3818 && ncode<=3819)
			{
				str = g_strdup("pie");
				break;
			}
			if(ncode>=3820 && ncode<=3824)
			{
				str = g_strdup("pin");
				break;
			}
			if(ncode>=3825 && ncode<=3833)
			{
				str = g_strdup("ping");
				break;
			}
			if(ncode>=3834 && ncode<=3841)
			{
				str = g_strdup("po");
				break;
			}
			if(ncode==3842)
			{
				str = g_strdup("pou");
				break;
			}
			if(ncode>=3843 && ncode<=3857)
			{
				str = g_strdup("pu");
				break;
			}
			if(ncode>=3858 && ncode<=3893)
			{
				str = g_strdup("qi");
				break;
			}
			if(ncode==3894||ncode>=3901 && ncode<=3902)
			{
				str = g_strdup("qia");
				break;
			}
			if(ncode>=3903 && ncode<=3924)
			{
				str = g_strdup("qian");
				break;
			}
			if(ncode>=3925 && ncode<=3932)
			{
				str = g_strdup("qiang");
				break;
			}
			if(ncode>=3933 && ncode<=3947)
			{
				str = g_strdup("qiao");
				break;
			}
			if(ncode>=3948 && ncode<=3952)
			{
				str = g_strdup("qie");
				break;
			}
			if(ncode>=3953 && ncode<=3963)
			{
				str = g_strdup("qin");
				break;
			}
			if(ncode>=3964 && ncode<=3976)
			{
				str = g_strdup("qing");
				break;
			}
			if(ncode>=3977 && ncode<=3978)
			{
				str = g_strdup("qiong");
				break;
			}
			if(ncode>=3979 && ncode<=3986)
			{
				str = g_strdup("qiu");
				break;
			}
			if(ncode>=3987 && ncode<=4005)
			{
				str = g_strdup("qu");
				break;
			}
			if(ncode>=4006 && ncode<=4016)
			{
				str = g_strdup("quan");
				break;
			}
			if(ncode>=4017 && ncode<=4024)
			{
				str = g_strdup("que");
				break;
			}
			if(ncode>=4025 && ncode<=4026)
			{
				str = g_strdup("qun");
				break;
			}
			if(ncode>=4027 && ncode<=4030)
			{
				str = g_strdup("ran");
				break;
			}
			if(ncode>=4031 && ncode<=4035)
			{
				str = g_strdup("rang");
			}
			if(ncode>=4036 && ncode<=4038)
			{
				str = g_strdup("rao");
				break;
			}
			if(ncode>=4039 && ncode<=4040)
			{
				str = g_strdup("re");
				break;
			}
			if(ncode>=4041 && ncode<=4050)
			{
				str = g_strdup("ren");
				break;
			}
			if(ncode>=4051 && ncode<=4052)
			{
				str = g_strdup("reng");
				break;
			}
			if(ncode==4053)
			{
				str = g_strdup("ri");
				break;
			}
			if(ncode>=4054 && ncode<=4063)
			{
				str = g_strdup("rong");
				break;
			}
			if(ncode>=4064 && ncode<=4066)
			{
				str = g_strdup("rou");
				break;
			}
			if(ncode>=4067 && ncode<=4076)
			{
				str = g_strdup("ru");
				break;
			}
			if(ncode>=4077 && ncode<=4078)
			{
				str = g_strdup("ruan");
				break;
			}
			if(ncode>=4079 && ncode<=4081)
			{
				str = g_strdup("rui");
				break;
			}
			if(ncode>=4082 && ncode<=4083)
			{
				str = g_strdup("run");
				break;
			}
			if(ncode>=4084 && ncode<=4085)
			{
				str = g_strdup("ruo");
				break;
			}
			if(ncode>=4086 && ncode<=4088)
			{
				str = g_strdup("sa");
				break;
			}
			if(ncode>=4089 && ncode<=4092)
			{
				str = g_strdup("sai");
				break;
			}
			if(ncode>=4093 && ncode<=4094)
			{
				str = g_strdup("san");
				break;
			}
			if(ncode>=4101 && ncode<=4102)
			{
				str = g_strdup("san");
				break;
			}
			if(ncode>=4103 && ncode<=4105)
			{
				str = g_strdup("sang");
				break;
			}
			if(ncode>=4106 && ncode<=4109)
			{
				str = g_strdup("sao");
				break;
			}
			if(ncode>=4110 && ncode<=4112)
			{
				str = g_strdup("se");
				break;
			}
			if(ncode==4113)
			{
				str = g_strdup("sen");
			}
			if(ncode==4114)
			{
				str = g_strdup("seng");
				break;
			}
			if(ncode>=4115 && ncode<=4123)
			{
				str = g_strdup("sha");
				break;
			}
			if(ncode>=4124 && ncode<=4125)
			{
				str = g_strdup("shai");
				break;
			}
			if(ncode>=4126 && ncode<=4141)
			{
				str = g_strdup("shan");
				break;
			}
			if(ncode>=4142 && ncode<=4149)
			{
				str = g_strdup("shang");
				break;
			}
			if(ncode>=4150 && ncode<=4160)
			{
				str = g_strdup("shao");
				break;
			}
			if(ncode>=4161 && ncode<=4172)
			{
				str = g_strdup("she");
				break;
			}
			if(ncode>=4173 && ncode<=4188)
			{
				str = g_strdup("shen");
				break;
			}
			if(ncode>=4189 && ncode<=4205)
			{
				str = g_strdup("sheng");
				break;
			}
			if(ncode>=4206 && ncode<=4252)
			{
				str = g_strdup("shi");
				break;
			}
			if(ncode>=4253 && ncode<=4262)
			{
				str = g_strdup("shou");
				break;
			}
			if(ncode>=4263 && ncode<=4301)
			{
				str = g_strdup("shu");
				break;
			}
			if(ncode>=4302 && ncode<=4303)
			{
				str = g_strdup("shua");
				break;
			}
			if(ncode>=4304 && ncode<=4307)
			{
				str = g_strdup("shuai");
				break;
			}
			if(ncode>=4308 && ncode<=4309)
			{
				str = g_strdup("shuan");
				break;
			}
			if(ncode>=4310 && ncode<=4312)
			{
				str = g_strdup("shuang");
				break;
			}
			if(ncode>=4313 && ncode<=4316)
			{
				str = g_strdup("shui");
				break;
			}
			if(ncode>=4317 && ncode<=4320)
			{
				str = g_strdup("shun");
				break;
			}
			if(ncode>=4321 && ncode<=4324)
			{
				str = g_strdup("shuo");
				break;
			}
			if(ncode>=4325 && ncode<=4340)
			{
				str = g_strdup("si");
				break;
			}
			if(ncode>=4341 && ncode<=4348)
			{
				str = g_strdup("song");
				break;
			}
			if(ncode>=4349 && ncode<=4352)
			{
				str = g_strdup("sou");
				break;
			}
			if(ncode>=4353 && ncode<=4364)
			{
				str = g_strdup("su");
				break;
			}
			if(ncode>=4365 && ncode<=4367)
			{
				str = g_strdup("suan");
				break;
			}
			if(ncode>=4368 && ncode<=4378)
			{
				str = g_strdup("sui");
				break;
			}
			if(ncode>=4379 && ncode<=4381)
			{
				str = g_strdup("sun");
				break;
			}
			if(ncode>=4382 && ncode<=4389)
			{
				str = g_strdup("suo");
				break;
			}
			if(ncode>=4390 && ncode<=4404)
			{
				str = g_strdup("ta");
				break;
			}
			if(ncode>=4405 && ncode<=4413)
			{
				str = g_strdup("tai");
				break;
			}
			if(ncode>=4414 && ncode<=4431)
			{
				str = g_strdup("tan");
				break;
			}
			if(ncode>=4432 && ncode<=4444)
			{
				str = g_strdup("tang");
				break;
			}
			if(ncode>=4445 && ncode<=4455)
			{
				str = g_strdup("tao");
				break;
			}
			if(ncode==4456)
			{
				str = g_strdup("te");
				break;
			}
			if(ncode>=4457 && ncode<=4460)
			{
				str = g_strdup("teng");
				break;
			}
			if(ncode>=4461 && ncode<=4475)
			{
				str = g_strdup("ti");
				break;
			}
			if(ncode>=4476 && ncode<=4483)
			{
				str = g_strdup("tian");
				break;
			}
			if(ncode>=4484 && ncode<=4488)
			{
				str = g_strdup("tiao");
				break;
			}
			if(ncode>=4489 && ncode<=4491)
			{
				str = g_strdup("tie");
				break;
			}
			if(ncode>=4492 && ncode<=4507)
			{
				str = g_strdup("ting");
				break;
			}
			if(ncode>=4508 && ncode<=4520)
			{
				str = g_strdup("tong");
				break;
			}
			if(ncode>=4521 && ncode<=4524)
			{
				str = g_strdup("tou");
				break;
			}
			if(ncode>=4525 && ncode<=4535)
			{
				str = g_strdup("tu");
				break;
			}
			if(ncode>=4536 && ncode<=4537)
			{
				str = g_strdup("tuan");
				break;
			}
			if(ncode>=4538 && ncode<=4543)
			{
				str = g_strdup("tui");
				break;
			}
			if(ncode>=4544 && ncode<=4546)
			{
				str = g_strdup("tun");
				break;
			}
			if(ncode>=4547 && ncode<=4557)
			{
				str = g_strdup("tuo");
				break;
			}
			if(ncode>=4558 && ncode<=4564)
			{
				str = g_strdup("wa");
				break;
			}
			if(ncode>=4565 && ncode<=4566)
			{
				str = g_strdup("wai");
				break;
			}
			if(ncode>=4567 && ncode<=4583)
			{
				str = g_strdup("wan");
				break;
			}
			if(ncode>=4584 && ncode<=4593)
			{
				str = g_strdup("wang");
				break;
			}
			if(ncode>=4594 && ncode<=4632)
			{
				str = g_strdup("wei");
				break;
			}
			if(ncode>=4633 && ncode<=4642)
			{
				str = g_strdup("wen");
				break;
			}
			if(ncode>=4643 && ncode<=4645)
			{
				str = g_strdup("weng");
				break;
			}
			if(ncode>=4646 && ncode<=4654)
			{
				str = g_strdup("wo");
				break;
			}
			if(ncode>=4655 && ncode<=4683)
			{
				str = g_strdup("wu");
				break;
			}
			if(ncode>=4684 && ncode<=4724)
			{
				str = g_strdup("xi");
				break;
			}
			if(ncode>=4725 && ncode<=4737)
			{
				str = g_strdup("xia");
				break;
			}
			if(ncode>=4738 && ncode<=4763)
			{
				str = g_strdup("xian");
				break;
			}
			if(ncode>=4764 && ncode<=4783)
			{
				str = g_strdup("xiang");
				break;
			}
			if(ncode>=4784 && ncode<=4807)
			{
				str = g_strdup("xiao");
				break;
			}
			if(ncode>=4809 && ncode<=4828)
			{
				str = g_strdup("xie");
				break;
			}
			if(ncode>=4829 && ncode<=4838)
			{
				str = g_strdup("xin");
				break;
			}
			if(ncode>=4839 && ncode<=4853)
			{
				str = g_strdup("xing");
				break;
			}
			if(ncode>=4854 && ncode<=4860)
			{
				str = g_strdup("xiong");
				break;
			}
			if(ncode>=4861 && ncode<=4869)
			{
				str = g_strdup("xiu");
				break;
			}
			if(ncode>=4870 && ncode<=4888)
			{
				str = g_strdup("xu");
				break;
			}
			if(ncode>=4889 && ncode<=4904)
			{
				str = g_strdup("xuan");
				break;
			}
			if(ncode>=4905 && ncode<=4910)
			{
				str = g_strdup("xue");
				break;
			}
			if(ncode>=4911 && ncode<=4924)
			{
				str = g_strdup("xun");
				break;
			}
			if(ncode>=4925 && ncode<=4940)
			{
				str = g_strdup("ya");
				break;
			}
			if(ncode>=4941 && ncode<=4973)
			{
				str = g_strdup("yan");
				break;
			}
			if(ncode>=4974 && ncode<=4990)
			{
				str = g_strdup("yang");
				break;
			}
			if(ncode>=4991 && ncode<=5011)
			{
				str = g_strdup("yao");
				break;
			}
			if(ncode>=5012 && ncode<=5026)
			{
				str = g_strdup("ye");
				break;
			}
			if(ncode>=5027 && ncode<=5079)
			{
				str = g_strdup("yi");
				break;
			}
			if(ncode>=5080 && ncode<=5101)
			{
				str = g_strdup("yin");
				break;
			}
			if(ncode>=5102 && ncode<=5119)
			{
				str = g_strdup("ying");
				break;
			}
			if(ncode==5120)
			{
				str = g_strdup("yo");
				break;
			}
			if(ncode>=5121 && ncode<=5135)
			{
				str = g_strdup("yong");
				break;
			}
			if(ncode>=5136 && ncode<=5155)
			{
				str = g_strdup("you");
				break;
			}
			if(ncode>=5156 && ncode<=5206)
			{
				str = g_strdup("yu");
				break;
			}
			if(ncode>=5207 && ncode<=5226)
			{
				str = g_strdup("yuan");
				break;
			}
			if(ncode>=5227 && ncode<=5236)
			{
				str = g_strdup("yue");
				break;
			}
			if(ncode>=5237 && ncode<=5248)
			{
				str = g_strdup("yun");
				break;
			}
			if(ncode>=5249 && ncode<=5251)
			{
				str = g_strdup("za");
				break;
			}
			if(ncode>=5252 && ncode<=5258)
			{
				str = g_strdup("zai");
				break;
			}
			if(ncode>=5259 && ncode<=5262)
			{
				str = g_strdup("zan");
				break;
			}
			if(ncode>=5263 && ncode<=5265)
			{
				str = g_strdup("zang");
				break;
			}
			if(ncode>=5266 && ncode<=5279)
			{
				str = g_strdup("zao");
				break;
			}
			if(ncode>=5280 && ncode<=5283)
			{
				str = g_strdup("ze");
				break;
			}
			if(ncode==5284)
			{
				str = g_strdup("zei");
				break;
			}
			if(ncode==5285)
			{
				str = g_strdup("zen");
				break;
			}
			if(ncode>=5286 && ncode<=5289)
			{
				str = g_strdup("zeng");
				break;
			}
			if(ncode>=5290 && ncode<=5309)
			{
				str = g_strdup("zha");
				break;
			}
			if(ncode>=5310 && ncode<=5315)
			{
				str = g_strdup("zhai");
				break;
			}
			if(ncode>=5316 && ncode<=5332)
			{
				str = g_strdup("zhan");
				break;
			}
			if(ncode>=5333 && ncode<=5347)
			{
				str = g_strdup("zhang");
				break;
			}
			if(ncode>=5348 && ncode<=5357)
			{
				str = g_strdup("zhao");
				break;
			}
			if(ncode>=5358 && ncode<=5367)
			{
				str = g_strdup("zhe");
				break;
			}
			if(ncode>=5368 && ncode<=5383)
			{
				str = g_strdup("zhen");
				break;
			}
			if(ncode>=5384 && ncode<=5404)
			{
				str = g_strdup("zheng");
				break;
			}
			if(ncode>=5405 && ncode<=5447)
			{
				str = g_strdup("zhi");
				break;
			}
			if(ncode>=5448 && ncode<=5458)
			{
				str = g_strdup("zhong");
				break;
			}
			if(ncode>=5459 && ncode<=5472)
			{
				str = g_strdup("zhou");
				break;
			}
			if(ncode>=5473 && ncode<=5504)
			{
				str = g_strdup("zhu");
				break;
			}
			if(ncode>=5505 && ncode<=5506)
			{
				str = g_strdup("zhua");
				break;
			}
			if(ncode==5507)
			{
				str = g_strdup("zhuai");
				break;
			}
			if(ncode>=5508 && ncode<=5513)
			{
				str = g_strdup("zhuan");
				break;
			}
			if(ncode>=5514 && ncode<=5520)
			{
				str = g_strdup("zhuang");
				break;
			}
			if(ncode>=5521 && ncode<=5526)
			{
				str = g_strdup("zhui");
				break;
			}
			if(ncode>=5527 && ncode<=5528)
			{
				str = g_strdup("zhun");
				break;
			}
			if(ncode>=5529 && ncode<=5539)
			{
				str = g_strdup("zhuo");
				break;
			}
			if(ncode>=5540 && ncode<=5554)
			{
				str = g_strdup("zi");
				break;
			}
			if(ncode>=5555 && ncode<=5561)
			{
				str = g_strdup("zong");
				break;
			}
			if(ncode>=5562 && ncode<=5565)
			{
				str = g_strdup("zou");
				break;
			}
			if(ncode>=5566 && ncode<=5573)
			{
				str = g_strdup("zu");
				break;
			}
			if(ncode>=5574 && ncode<=5575)
			{
				str = g_strdup("zuan");
				break;
			}
			if(ncode>=5576 && ncode<=5579)
			{
				str = g_strdup("zui");
				break;
			}
			if(ncode>=5580 && ncode<=5581)
			{
				str = g_strdup("zun");
				break;
			}
			if(ncode>=5582 && ncode<=5589)
			{
				str = g_strdup("zuo");
				break;
			}
	}

	return str;
}

static gchar *
gb2312_to_pinyin(const gchar *str)
{
	int i = 0;
	int ncode;
	unsigned char high;
	unsigned char low;
	gchar *p = NULL;

	GString *string;

	if(!str)
		return NULL;

	string = g_string_new(NULL);

	if(!string)
		return NULL;

	while(str[i] != '\0')
	{
		if((unsigned char)str[i] < 0x80)
		{
			string = g_string_append_c(string, tolower(str[i]));
			++i;
			continue;
		}
		else
		{
			high = (unsigned char)str[i];
			low = (unsigned char)str[i + 1];
			i = i + 2;

			if(high < 0xa1 || low < 0xa1)
				continue;
			else
				ncode = (high - 0xa0) * 100 + low - 0xa0;

			p = lookup(ncode);

			if(p)
			{
				string = g_string_append(string, p);
				g_free(p);
			}
		}
	}

	p = string->str;
	g_string_free(string, FALSE);

	return p;
}

gchar *
utf8_to_pinyin(const gchar *utf8_str)
{
	gsize bytes_read;
	gsize bytes_written;
	GError *error = NULL;
	gchar *gb2312_str = NULL;;
	gchar *str = NULL;

	gb2312_str = g_convert(utf8_str, 
			-1, 
			"gb2312",
			"utf-8",
			&bytes_read,
			&bytes_written,
			&error);

	if(error)
	{
		fprintf(stderr, "utf8_to_pinyin: %s\n", error->message);
		g_error_free(error);
		return NULL;
	}

	if(gb2312_str)
	{
		str = gb2312_to_pinyin(gb2312_str);
		g_free(gb2312_str);
	}

	return str;
}

