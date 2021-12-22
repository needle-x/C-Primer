#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//int main() {
//	vector<string> words = {"pxlqovnbsgvqjzpfeidchzrodnbqfrccfydzjptukscjuatlsrcurepllxzyghhdepitqptlmfkhzxjgswaulxkfydhkilg","uqklvqnlhdkwryjawkqfajfpbcnhglxlwxlaskxlytr","jvgkxcdkxrvfahjkvhmfuyjzxtyxrsogbtsjybeaxugqymcr","rgxditmosplnqvodtis","jm","ruqjwejuanjtiizcmbieobesnjnadzqvqumggblzmkxilgfarnxwpcawtkzxlvugibpidvwtikloeziuxqoi","wxeyzrnbhlhwxecrgejsrawyulynvgtszwqqlihkcvckgcgtgpyqtkuwvjywmhpskaiwmpyarftqhnogxpith","vdpbykqlihtpvfnqbrcjpggojqbalerohyitktuikbffvfatcnneuvbanjihiaorrjcdthntnrxebfhvshmpodmzhtwnasbm","wgjstkoaojcesfdrllugmojwdmgeejyiqvshlowtktddattunarnohgvqsoskfmbrami","ecwqxbawirvnxvsjybbebclaturorlcbpf","gtjbaigvufrotlwfoqqolnjabnvtbcygtfcytinzpcjbvprdkdjawrcbthmxjrabimhhs","cvzlbrvppkyxtjxzeglzwoagmpjnfxddbwolxmwdohgtfktgftzzkwpianslkpldyfzubtjczse","neaw","mxhmvkajofnmdiiduactlemcvpztscmsnrdhuhquxnnzywsrzxyplgbppiypxwcfbsnyzblaeifo","krekecabfpufucjhqphjnibaeqdvdpmrfougdwugvoioqangdnxromwlxnfeydaneyazzclscqgdxlhhgnoqmslfflzqv","klutvchxsceihfmzitgqakytesfjykribjhjzdruuoycjkwaghmmqkfrhkrtawudtjyjwqbyspamlegqjlwlj","raykfkflqdzrpthdejetwolgciygwaktulkxemkdbbllkjxhnnafsms","os","xhchkcetmlprcdmrnalvkvgabxxnomphqpqhnddqhecogspbdebeoshvjgzvmqu","jqtdysnpskktynxwmsfaabglagnqcllptvuyyqjwrmqaftenusmsahhhqubkwxltpr","sulmwluiwvlroldpiyecaicwrawzwflokefqkdwmxejaovvpbflfdtviinbvvtlhhhefmgfsqs","sxyhcckvyl","vsaacsybcddxvuzkddjmuivsvtjyanpbydmkcwnkmxvsiantgkvkmqjysclsvd","sxcghypulvmfqfunxj","pozekufhlooosxpcggbi","xzaoxzllcixfqbupqozmzrnugj","j","tgslwp","ntrdkixexajlpjgmcbrqimwtqnzfrqjszeiuvrgzclerzmsnagzaxbredvlrmipzflrzusclckmxphc","ifdflsywdfizpodsehrrifsvejcxarrxmxyjgbbvqyqvywncphzfmnxhybxpdcozfnzablfx","uluhplzrsaehaqxfnbcmixueedevhirbwqdyztwaxnkogcauymxgcpabxekib","agtfkinbdccoemxetbryzpluzlpyzicnfopphrxriqm","pdympxpwvxwcqaxrvbvyqkrresrjgzgxuyfxtkgldtathokdbyfsqfmitmiyagtqgijaiazvsumeyutbbwxqdshquzrehn","rqe","sljsvenhhstnnngzqyo","dezrzpgldeimxfoqajuhjctgvalwkhkjemjaxumxqmifglbizusuqlttxirpbqbuvauwy","dkwpyezbmkcskoxxcgrxcewknqgdckjxfyzcmzqcbyeucxbqybxoldogtkmdknsrruvnlfqnpfx","sjeftmjkuperfynbreycwhuoyqybticswblbrrpugzhlrmiedjqufnehevzqwtaebwvdswsz","lolnfyliloqmhjmhhohdtgfajjfdjqpubslbsrwitbjmrcegdrdjzvonxaefdvdfcbqmaaks","qhcoaiocjhuzywkirlblajgeapzajqsoa","sxrmoqxqbtakuqwmrrkljmegbwbeqbywmlyuprwyhljzejbybxoumidpxdrohwdjoqycpxcmivaulnqzneydwqfsvcxgyyseuk","yrowy","dohrzkrzdjehpctnjrvhzojullsiucrhphshwxwicyzkvzbqrztic","rmshnxtbhsdgkiijrmwulocdzjzpgfyimkjdthuzkhoqgkeawgwincubrloknocxwzgqqcxafksxgzh","aymovnuhptozhkiyowbeguzlkmrwjnujgjbdne","abc","vxoigovwmqizmkwbkktqk","uokwktdempzloaglvvkqstztmwzcmhgxtoua","bzwjxqueazlzfojrkbqmhtwrvuwsnfcnylurnddpektekca","qgndjgvzcyajhgmrrnhdywwdbmkhtthwcfiueuxfldanyrmccwcy"};
//	string chars = "figspbov";
//	char upper = *max_element(chars.begin(), chars.end());
//	cout << (int)upper << endl;
//	vector<int> frequency((int)upper + 1);
//	int ans = 0;
//	for (char c : chars) {
//		++frequency[(int)c];
//	}
//	for (string s : words) {
//		bool flag = true;
//		vector<int> freq = frequency;
//		for (char c : s) {
//			if ((int)c > (int)upper || freq[(int)c] == 0) {
//				flag = false;
//				break;
//			}
//			if (freq[(int)c] != 0) {
//				--freq[(int)c];
//			}
//		}
//		if (flag) ans++;
//	}
//	cout << ans;
//	return 0;
//}