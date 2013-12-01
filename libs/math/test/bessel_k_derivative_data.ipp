//  Copyright (c) 2013 Anton Bikineev
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

   static const boost::array<boost::array<typename table_type<T>::type, 3>, 263> bessel_k_derivative_data = {{
      {{ SC_(-0.8049192047119140625e2), SC_(0.24750102996826171875e2), SC_(-223964241238127376907362933849.77811883621356945073) }}, 
      {{ SC_(-0.8049192047119140625e2), SC_(0.637722015380859375e2), SC_(-3.8648041779027959239388782349048349624084267353649e-09) }}, 
      {{ SC_(-0.8049192047119140625e2), SC_(0.1252804412841796875e3), SC_(-3.6565779603591655562583295314803218468260642362413e-45) }}, 
      {{ SC_(-0.8049192047119140625e2), SC_(0.25554705810546875e3), SC_(-2.4190909126777442847637956215785750284058654395426e-107) }}, 
      {{ SC_(-0.8049192047119140625e2), SC_(0.503011474609375e3), SC_(-1.219620886701684973558478574167401783825245103538e-217) }}, 
      {{ SC_(-0.8049192047119140625e2), SC_(0.10074598388671875e4), SC_(-2.8759116222738175323191695250228885450735227319625e-438) }}, 
      {{ SC_(-0.8049192047119140625e2), SC_(0.1185395751953125e4), SC_(-8.656135863990512823611279606761037327763769429165e-516) }}, 
      {{ SC_(-0.8049192047119140625e2), SC_(0.353451806640625e4), SC_(-5.0156745400827303020875916527662318545254904167654e-1537) }}, 
      {{ SC_(-0.8049192047119140625e2), SC_(0.80715478515625e4), SC_(-7.7664147329568575919379482774926088376140985600006e-3508) }}, 
      {{ SC_(-0.8049192047119140625e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-6.3957444698529951994589166738566522004887281442523e-7051)) }}, 
      {{ SC_(-0.8049192047119140625e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.0741239974147423625304060686424101773477735801947e-13929)) }}, 
      {{ SC_(-0.8049192047119140625e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.8623745476551145305348906256496397306448089397871e-15797)) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.24750102996826171875e2), SC_(-3794454981121002761198744.982614020808197929681997) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.637722015380859375e2), SC_(-8.974709123714151378434735362197948490079242892211e-12) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.1252804412841796875e3), SC_(-1.1542368579655756226858659851675383404078664655503e-46) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.25554705810546875e3), SC_(-4.1455838380761457914925022602955935390233578702302e-108) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.503011474609375e3), SC_(-4.9326837255106385876980488126276641132040755503018e-218) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.10074598388671875e4), SC_(-1.8281004439703352079910815343682319706696940035428e-438) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.1185395751953125e4), SC_(-5.8891472101462070923686253349770419831103413999691e-516) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.353451806640625e4), SC_(-4.4076834751264207754504577197432798341964297761109e-1537) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.80715478515625e4), SC_(-7.3391630299178173734443377525918932290713974948573e-3508) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-6.2182696019406168576500601010874825439179538162594e-7051)) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.0023677870089337028208152148428288392719301653778e-13929)) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.8266539948347919351166378742384267515954784710424e-15797)) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.24750102996826171875e2), SC_(-173130896033510584513668.61333176231095893188765737) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.637722015380859375e2), SC_(-1.6661597801597259037807387557654501633956196709128e-12) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.1252804412841796875e3), SC_(-4.453514117992647398717300213848578053804423885993e-47) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.25554705810546875e3), SC_(-2.5539832872656254981901074161597258860814633052973e-108) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.503011474609375e3), SC_(-3.8479957755790590299812722344368637764046588759177e-218) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.10074598388671875e4), SC_(-1.6144881335280453027771285738245939972462035053573e-438) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.1185395751953125e4), SC_(-5.2988274712363455506775334512381862742446695384697e-516) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.353451806640625e4), SC_(-4.2542329100177561901550473597877558324298118410738e-1537) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.80715478515625e4), SC_(-7.226163709518519127052322977989779630523951878905e-3508) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-6.1704684198809868239616753576099614792266492248368e-7051)) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-4.9828685924566586624316802472111294541905099204842e-13929)) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.8169367703601964783181199163061646744819562747861e-15797)) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.24750102996826171875e2), SC_(-1829426347716924.1227313529873561419974614447058893) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.637722015380859375e2), SC_(-9.1782948313211819423448111954220793845613677248824e-17) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.1252804412841796875e3), SC_(-1.8554904641776856052632062680604401721166694972761e-49) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.25554705810546875e3), SC_(-1.5958918016319967676671126677638853739233424616111e-109) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.503011474609375e3), SC_(-9.3067997773126529953008318348539938326970709231604e-219) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.10074598388671875e4), SC_(-7.9379964640920900964825870885447624518568666914701e-439) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.1185395751953125e4), SC_(-2.8980227236708651594211454215936337150886954450001e-516) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.353451806640625e4), SC_(-3.4746281631433370686786072309756667233289020543629e-1537) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.80715478515625e4), SC_(-6.6132054045070196759039061368519891414462171632671e-3508) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.9043602406958926091296458228963784842968100907072e-7051)) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-4.8729259482914066589308177561682630747529311120642e-13929)) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.7620632063085934867173943429793291237843713829425e-15797)) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.24750102996826171875e2), SC_(-49396409297.490647582468895045687942174873315990384) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.637722015380859375e2), SC_(-4.0142031234786326238595299670386255343146834891239e-19) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.1252804412841796875e3), SC_(-9.3846429799889887766852348985434531848730286010065e-51) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.25554705810546875e3), SC_(-3.5650479233582400513141896503559253889643843272817e-110) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.503011474609375e3), SC_(-4.3276242223807114945318504356531651005611617538824e-219) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.10074598388671875e4), SC_(-5.4133680975277376537574669543559816153395454892444e-439) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.1185395751953125e4), SC_(-2.0931512445244537587237937804978964980530155782611e-516) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.353451806640625e4), SC_(-3.1154082169824800589363562906159483306517530697762e-1537) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.80715478515625e4), SC_(-6.3046269405011200377164065990245814289483059931174e-3508) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.7656977629060996677137391746740699826791877142929e-7051)) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-4.8146671143615768740572164853371762978433764136753e-13929)) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.7329263839992471059696942162858928888180351639778e-15797)) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.95070552825927734375e1), SC_(-271482002899936712799296.60515232802719978112499566) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.24750102996826171875e2), SC_(-2554.033745152413943693101775592517859528799221138) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.637722015380859375e2), SC_(-9.7751694689029171430775793718696451123988070641942e-23) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.1252804412841796875e3), SC_(-1.0516107763372982964330960211638511205830507828004e-52) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.25554705810546875e3), SC_(-3.7927860534214524747307158177418493572114982880834e-111) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.503011474609375e3), SC_(-1.3803383944937296055133828171313833086259503020534e-219) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.10074598388671875e4), SC_(-3.0584450414521647331130316852714332727782272065109e-439) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.1185395751953125e4), SC_(-1.2883873251968340441370687908660178577311857550059e-516) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.353451806640625e4), SC_(-2.6474863850637752285573060385342961915402343053879e-1537) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.80715478515625e4), SC_(-5.870969276329755035121868562159453201581771218073e-3508) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.5649290688654891244741336984344607680958490974081e-7051)) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-4.7290739510894349480191824314676000225472499448942e-13929)) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.6900430631658865044473565242390914709237255551255e-15797)) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.51139926910400390625e1), SC_(-37636469299900483022369314553.072352004705028846015) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.95070552825927734375e1), SC_(-630089233072712854.8409247881217057768702039904244) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.24750102996826171875e2), SC_(-1.183538488671079810920959373146030602391825145389) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.637722015380859375e2), SC_(-2.5723195002032899632527205292031685531995825614117e-24) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.1252804412841796875e3), SC_(-1.5254420738891017336405940800600562074273985556971e-53) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.25554705810546875e3), SC_(-1.4559879341701341431357418580247625285353145897093e-111) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.503011474609375e3), SC_(-8.4773238379194752151585092142913643576508037528734e-220) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.10074598388671875e4), SC_(-2.3974554262897385488654488656680991812226311278267e-439) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.1185395751953125e4), SC_(-1.0475378640932329506302063797864154189298544329546e-516) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.353451806640625e4), SC_(-2.4699839511769809026546484165085136668572898601802e-1537) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.80715478515625e4), SC_(-5.6952465099118950239800109933328230707743244892587e-3508) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.4814594363694066448333278657896376072867354638352e-7051)) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-4.6930403971681920345835419144543167035203586378855e-13929)) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.6719623870133770904648159382814374770999564883442e-15797)) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.7444499991834163665771484375e-2), SC_(-3427155579533461926560347914576.2659504838360420276) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.1433600485324859619140625e-1), SC_(-3818689510260838519163904833.6952420143385317294059) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.1760916970670223236083984375e-1), SC_(-452062364700677260126198639.75113581550764993709773) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.6152711808681488037109375e-1), SC_(-1040955950980707790269.4299646350196572662077783686) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.11958599090576171875e0), SC_(-1053374412699994211.6306030825936388392503825293911) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.15262925624847412109375e0), SC_(-83761519293122829.101773109228707223041734104233113) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.408089816570281982421875e0), SC_(-3088021660860.6089391737982114542649558639482823028) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.6540834903717041015625e0), SC_(-22969284433.864746960769277427469810135792673884966) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.1097540378570556640625e1), SC_(-104899686.50144952539870752467353023720885634201081) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.30944411754608154296875e1), SC_(-1840.7682581711522698284701502582384535202491926033) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.51139926910400390625e1), SC_(-6.858812995784998062942053449468906418242636978782) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.95070552825927734375e1), SC_(-0.0027577094707850600730109884367242014475591075898194) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.24750102996826171875e2), SC_(-2.7224455441410718952197541892429158883708802180596e-11) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.637722015380859375e2), SC_(-6.3597021374512448931577321133980261688515738941956e-29) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.1252804412841796875e3), SC_(-6.2332881545225776239572596406653426466781273100913e-56) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.25554705810546875e3), SC_(-9.7078795284639720066242141986753938723152615534655e-113) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.503011474609375e3), SC_(-2.1403045141894500839206881025187087450839942491373e-220) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.10074598388671875e4), SC_(-1.205916590061089276537612753281951396093960203636e-439) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.1185395751953125e4), SC_(-5.841751568644388295730530867558839003018904325686e-517) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.353451806640625e4), SC_(-2.0307216479223082848976336447590087355184465677807e-1537) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.80715478515625e4), SC_(-5.2272666574019230764224335705555460722247979035015e-3508) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.2526281603299794187002407722813090172937885810585e-7051)) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-4.5928406765707296427049517993687176720197130593291e-13929)) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.6215980381945457266533766026667638402488142346227e-15797)) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.7444499991834163665771484375e-2), SC_(-5851185807135446314832112351634.1819910593317794759) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.1433600485324859619140625e-1), SC_(-6236253246284024412252549297.0487903380078788490756) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.1760916970670223236083984375e-1), SC_(-728032589998503473674818600.86098805935305818371187) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.6152711808681488037109375e-1), SC_(-1540058757026849522678.335863598383449541342206072) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.11958599090576171875e0), SC_(-1489755391203527283.5602193413776679142961754649617) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.15262925624847412109375e0), SC_(-116517568755358451.82806255917205982975637790800777) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.408089816570281982421875e0), SC_(-4018551650242.3286636817037249926315390272322451157) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.6540834903717041015625e0), SC_(-28950656808.019322118767209512654311516045171638684) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.1097540378570556640625e1), SC_(-127669937.66618853499358333828678028505693277763617) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.30944411754608154296875e1), SC_(-2090.7388780817602582967525631240782753021078719477) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.51139926910400390625e1), SC_(-7.5463165974047203511797905034162517876343658691936) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.95070552825927734375e1), SC_(-0.0029309631969014564144211140917018319128913300876288) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.24750102996826171875e2), SC_(-2.7931198164391806633578965774477683390200972584247e-11) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.637722015380859375e2), SC_(-6.423913314699177934763485541579345711445293858167e-29) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.1252804412841796875e3), SC_(-6.2652168118769203920016633434714314247825357538294e-56) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.25554705810546875e3), SC_(-9.7321953356535406285581925162284945376126437877329e-113) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.503011474609375e3), SC_(-2.1430242465698200010484492234563470453428550711791e-220) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.10074598388671875e4), SC_(-1.2066811019120825045179156471192199681392942673799e-439) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.1185395751953125e4), SC_(-5.8448987609288437390754407878756150559083096235001e-517) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.353451806640625e4), SC_(-2.0310883966468148250525654800687598422759675092997e-1537) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.80715478515625e4), SC_(-5.227679999954676741508563213791686790501420689684e-3508) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.2528347213744672202235751430991747045724191573575e-7051)) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-4.5929320864181005616558232532924045911157365870741e-13929)) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.6216440432319468135179147791322891298362527538146e-15797)) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.30944411754608154296875e1), SC_(-2703460138383334226785.8952309617484269027738870981) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.51139926910400390625e1), SC_(-2361579810257303.1746177913911939066456892945276097) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.95070552825927734375e1), SC_(-53297600.945970785659110047313065869229429407527608) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.24750102996826171875e2), SC_(-2.7322935476952384421624646276518154555874357699991e-06) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.637722015380859375e2), SC_(-7.458806105852020109544129229653949062809503862865e-27) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.1252804412841796875e3), SC_(-7.1885289684658209214568335395838266667272551515693e-55) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.25554705810546875e3), SC_(-3.2237565081836967692921123825781230165292370255215e-112) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.503011474609375e3), SC_(-3.9375839005040834005209671960984576149002775327498e-220) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.10074598388671875e4), SC_(-1.6348056552286935958856608874032788011281323312087e-439) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.1185395751953125e4), SC_(-7.565701462322488514392238602794040994318412951773e-517) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.353451806640625e4), SC_(-2.2146561753970150512208528846139768851305472927095e-1537) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.80715478515625e4), SC_(-5.4295380425240834967649921477044758179117000499538e-3508) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.3527474926390590390450586484234918215273910025783e-7051)) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-4.6369405163316718048346954405378172122816602364608e-13929)) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.6437802125142085847447441824043966110822320584156e-15797)) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.24750102996826171875e2), SC_(-5147139022820570.284175126020109024353372264785421) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.637722015380859375e2), SC_(-1.5781202431077523844489918560779441261412356840385e-16) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.1252804412841796875e3), SC_(-2.5042685397615288140312427313330462898622518038587e-49) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.25554705810546875e3), SC_(-1.8560763396228203892267279954438157925026808891407e-109) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.503011474609375e3), SC_(-1.0053934862260142528561581085876193378353303099413e-218) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.10074598388671875e4), SC_(-8.2504760699805553686175369679606746412053109053836e-439) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.1185395751953125e4), SC_(-2.9947073083622267236403986996987408873402467085761e-516) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.353451806640625e4), SC_(-3.5130874985077718165122645144657352387520873231208e-1537) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.80715478515625e4), SC_(-6.6451588210557867161792635996990211260885515344242e-3508) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.9185312189178414575803149900993953549758111240348e-7051)) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-4.8788416254678656018640268234399995679659857258356e-13929)) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.7650194848496802725022015681100389801943277408077e-15797)) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.24750102996826171875e2), SC_(-5076748535499182154.8412655939605138744123644571706) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.637722015380859375e2), SC_(-6.0412725934771605886732293460789115556993921109361e-15) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.1252804412841796875e3), SC_(-1.89928560341342649907842547864309762621042407647e-48) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.25554705810546875e3), SC_(-5.1604712519070236993192854246973980865057642900645e-109) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.503011474609375e3), SC_(-1.6963435550245319839267676662939751976606435723255e-218) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.10074598388671875e4), SC_(-1.0717326903476082673709992617919845592752783902307e-438) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.1185395751953125e4), SC_(-3.7404173010417444107047672195151770724108267408562e-516) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.353451806640625e4), SC_(-3.7851250253977252806288033473479118266183047481964e-1537) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.80715478515625e4), SC_(-6.8657655267904358881383879646390626211512084185104e-3508) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-6.0154474122446026999325365645853327992364006660333e-7051)) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-4.9191131925687988761400444254913086858210507562062e-13929)) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.7851334107615986842215082352287318432084378210178e-15797)) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.24750102996826171875e2), SC_(-797143397806142489140436343513.188698478436260181) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.637722015380859375e2), SC_(-7.8446412667145703510057608229381981967232540373301e-09) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.1252804412841796875e3), SC_(-5.4869736024923887578776172340636378348130360063137e-45) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.25554705810546875e3), SC_(-2.9778182406450569657171579622197633758356410990054e-107) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.503011474609375e3), SC_(-1.3570012410413562192422807359750241525931645449109e-217) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.10074598388671875e4), SC_(-3.0337733261419032377221304195526698290544618189646e-438) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.1185395751953125e4), SC_(-9.0584199132792510325959617058561761869968221305727e-516) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.353451806640625e4), SC_(-5.0927047047889256877485194362179209193435584919404e-1537) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.80715478515625e4), SC_(-7.8184212557408450646831842347388626077691523713969e-3508) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-6.4170086957191749822776908115859209676213840978517e-7051)) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.0826551713967132062394440377037941792655959855063e-13929)) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.8666174136737838442341020573322861385171298444454e-15797)) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.637722015380859375e2), SC_(-3.9922836225967407159337431526018164398258675674154e-08) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.1252804412841796875e3), SC_(-1.3973040826896417386374504886139428368125505562956e-44) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.25554705810546875e3), SC_(-4.8080702496870118568344418261522460218382087799518e-107) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.503011474609375e3), SC_(-1.735766313757924593296347300682641994132950716854e-217) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.10074598388671875e4), SC_(-3.4317229224364358578667133809160256150760239372683e-438) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.1185395751953125e4), SC_(-1.0059050639303791446042609523064399327854494633994e-515) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.353451806640625e4), SC_(-5.2749237598198364066251180455661084543160354803286e-1537) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.80715478515625e4), SC_(-7.9397114208825646332100291003350448618992737400947e-3508) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-6.4663267661753335706506210073515689692432301370585e-7051)) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.1023879217726109450620115433577194983362528138656e-13929)) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.8764280102985703123126780438959047264409493344192e-15797)) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.637722015380859375e2), SC_(-0.0007932632896063968245556002638598219294410919498595) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.1252804412841796875e3), SC_(-4.3512244779798717227112269652119524511161519994708e-42) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.25554705810546875e3), SC_(-9.2566270427150370548850056090399350078970616000706e-106) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.503011474609375e3), SC_(-7.9524393648761788862733926406890798845137948779618e-217) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.10074598388671875e4), SC_(-7.3555457603498868131715315786831277464012560184749e-438) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.1185395751953125e4), SC_(-1.9232489142496594087196115792224269913639203385902e-515) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.353451806640625e4), SC_(-6.5564198742447663877461815444804142729014762324551e-1537) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.80715478515625e4), SC_(-8.7330225341874204353608853947172411314415673392366e-3508) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-6.7799651056836389641030667844508599102560821442743e-7051)) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.2261765548607648124919660044239717258336818015426e-13929)) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.9378708232494017304385880130385296867383510152385e-15797)) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.637722015380859375e2), SC_(-0.0044512613861551140798036411347850290414244047741939) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.1252804412841796875e3), SC_(-1.1944657129581104600131320008417455508338175128383e-41) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.25554705810546875e3), SC_(-1.561444368870746681889935515668213889838395185459e-105) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.503011474609375e3), SC_(-1.0412066886011549603808152292805394847886667334919e-216) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.10074598388671875e4), SC_(-8.4190820312119011318825776224590158777234250198776e-438) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.1185395751953125e4), SC_(-2.1572337418487191967782947963264608762580406428955e-515) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.353451806640625e4), SC_(-6.8139591545391258428643002564400907085598183636322e-1537) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.80715478515625e4), SC_(-8.8816145997478941460493063996297808582382258819881e-3508) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-6.8370952089280804612249189744726511272755470401056e-7051)) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.2484181817780779154875877864045432835400067558302e-13929)) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.9488921617849679064063269458199255934826615007963e-15797)) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.637722015380859375e2), SC_(-0.0086193499264408384061544921656171038123785912461197) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.1252804412841796875e3), SC_(-1.7599720670846666046250588911522373229642596323551e-41) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.25554705810546875e3), SC_(-1.9088531900333186769060488626063146154344533534065e-105) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.503011474609375e3), SC_(-1.15483265133524546539038776396176049148957187365e-216) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.10074598388671875e4), SC_(-8.8676471191380742036934522321506604712730216617774e-438) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.1185395751953125e4), SC_(-2.2545666176316840092866897706851243814725216428028e-515) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.353451806640625e4), SC_(-6.9156244746410304043798713595842249852020302261852e-1537) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.80715478515625e4), SC_(-8.9394021100953091263153329299187451630582479509392e-3508) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-6.8591832582144387646368065885889101010022659132943e-7051)) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.2569927829632576125083458239049157355980847188863e-13929)) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.9531396362529126716854500487074476649605067278358e-15797)) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.637722015380859375e2), SC_(-0.01137030065815612960370831087647104379911521526917) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.1252804412841796875e3), SC_(-2.0706888972387411205898048220596042570054762245014e-41) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.25554705810546875e3), SC_(-2.076747188203903305949196338713305075811149238145e-105) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.503011474609375e3), SC_(-1.206138863501423091012055647373090290373057026604e-216) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.10074598388671875e4), SC_(-9.0629576101423788912524341010755944080482662765986e-438) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.1185395751953125e4), SC_(-2.2967143819366169401505634677120170066995690649849e-515) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.353451806640625e4), SC_(-6.9587443759167291523051646597944050009369317166297e-1537) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.80715478515625e4), SC_(-8.963767622812737147576550718407855129766122180056e-3508) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-6.8684749432461237452482072444067606374284784899753e-7051)) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.2605957482764622649044864083253881631348210278576e-13929)) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.9549241397840480921229968726823503335972147694438e-15797)) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.637722015380859375e2), SC_(-3.6686816477282175741062854887392827202537802300625) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.1252804412841796875e3), SC_(-6.2399832007271194286193178414362361578969127220333e-40) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.25554705810546875e3), SC_(-1.2197055850790942102833053161804296244667372399762e-104) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.503011474609375e3), SC_(-3.0073585223276919910623824690988486916059485468597e-216) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.10074598388671875e4), SC_(-1.4327862387775261953192982503772965587341390132943e-437) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.1185395751953125e4), SC_(-3.3901517048219300614034883286039472371133965744397e-515) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.353451806640625e4), SC_(-7.9302445478748911451073379421472555993851487974647e-1537) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.80715478515625e4), SC_(-9.4917070630321412669855703990840487507093560375947e-3508) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-7.0667715724747080745349594062644690011902150106069e-7051)) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.3369217577635370104041886049119027025431819578313e-13929)) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.9926936605456938905177281393602465206014795130064e-15797)) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.637722015380859375e2), SC_(-8.8285524650129256933638180698917549810701836035733) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.1252804412841796875e3), SC_(-1.0497921358763538655117406514801854108191113233841e-39) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.25554705810546875e3), SC_(-1.5996444827452915890990402200237025952688558810316e-104) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.503011474609375e3), SC_(-3.4595213350656230785971872762202885234300143856178e-216) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.10074598388671875e4), SC_(-1.5370356988755426778767692613876015040381491797487e-437) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.1185395751953125e4), SC_(-3.5987581690622945659656802112451101694463306035307e-515) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.353451806640625e4), SC_(-8.0907841383527165661715057045677964687892142603151e-1537) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.80715478515625e4), SC_(-9.5753775952636351949636155792849650813468738905751e-3508) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.1622925e5), SC_(BOOST_MATH_SMALL_CONSTANT(-7.0976847244501301711496758361494292049081737362601e-7051)) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.3206622265625e5), SC_(BOOST_MATH_SMALL_CONSTANT(-5.3487247123357975974272081432102149067206440666883e-13929)) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.3636794921875e5), SC_(BOOST_MATH_SMALL_CONSTANT(-2.9985285649643779417565006201095646024682201998538e-15797)) }}
   }};
