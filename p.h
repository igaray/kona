/* This file was automatically generated.  Do not edit! */
extern V ends[];
I charsAdverb(C c);
extern V adverbs[];
extern V vd0[];
extern V vm0[];
I charsVerb(C c);
extern V vd[];
extern V vm[];
extern V vt_[];
extern V vd_[];
extern V vm_[];
I SC(S a,S b);
K *denameS(S dir_string,S t);
K EV(K e);
K newEntry(S s);
extern V vn_[];
K _n();
extern S n_s;
S sp(S k);
K formKfCS(S s);
K formKiCS(S s);
S strdupn(S s,I k);
extern S IFP[3];
K DE(K d,S b);
K Kd();
K kerr(cS s);
K *EVP(K e);
K DI(K d,I i);
K kap(K *a,V v);
K ci(K a);
extern S LS;
K newE(S s,K k);
I sva(V p);
I adverbClass(V p);
I bk(V p);
extern V addressSSR,addressWhat,addressAt,addressDot,addressColon;
I param_validate(S s,I n);
I param_gp(C c);
extern S param_dfa;
I unescaped_fill(S d,S s,I n);
I unescaped_size(S s,I n);
C unescape(S s,I *k);
I odigitlen3(S s);
I isodigit(C c);
I sz(I t,I n);
I lsz(I k);
I capture(S s,I n,I k,I *m,V *w,I *d,K *locals,K *dict,K func);
K Kv();
K cd(K a);
void pdafree(PDA p);
K newK(I t,I n);
K backslash(S s,I n);
extern S __d;
extern K KTREE;
K *denameD(K *d,S t);
K wd_(S s,I n,K *dict,K func);
K wd(S s,I n);
I max(I a,I b);
I mark(I *m,I k,I t);
I overcount(I *m,I n);
enum mark_members {MARK_UNMARKED,MARK_IGNORE,MARK_BRACKET,MARK_END,MARK_PAREN,MARK_BRACE,MARK_QUOTE,MARK_SYMBOL,
                  MARK_NAME,MARK_NUMBER,MARK_VERB,MARK_ADVERB,MARK_CONDITIONAL,MARK_COUNT};
typedef enum mark_members mark_members;
#define EXPORT_INTERFACE 0
I mark_ignore(S s,I n,I i,I *m);
I mark_end(S s,I n,I i,I *m);
I mark_conditional(S s,I n,I k,I *m);
I isCharVerb(C c);
I mark_verb(S s,I n,I i,I *m);
I mark_adverb(S s,I n,I i,I *m);
I stringHasChar(S s,C c);
I mark_number(S s,I n,I i,I *m);
I mark_name(S s,I n,I i,I *m);
I isalnumdot_(C c);
I isalnum_(C c);
I mark_symbol(S s,I n,I i,I *m);
C bottom(PDA p);
C pop(PDA p);
C peek(PDA p);
I push(PDA p,C c);
PDA newPDA();
I complete(S a,I n,PDA *q,I *marks);
I parsedepth(PDA p);
C flop(C c);
extern S right;
extern S left;
extern S formed_dfa;
I charpos(S s,C c);
I formed_group(C c);