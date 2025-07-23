/*
yarpgen version 2.0 (build 27a5fb5 on 1980:01:01)
Seed: 4
Invocation: ./yarpgen --seed=4 --nautilus=true -o /home/marg/nes/nautilus/yarpgen-stuff/test_4
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned int> var_0, val<unsigned int> var_2, val<unsigned short> var_3, val<unsigned short> var_5, val<unsigned char> var_7, val<int> var_8, val<unsigned short> var_9, val<unsigned long long int> var_12, val<int> zero, val<unsigned char*> var_13, val<short*> var_14, val<unsigned int*> var_15, val<int*> var_16) {
    *var_13 = ((/* implicit */val<unsigned char>) max((var_13), (((/* implicit */val<unsigned char>) (((val<bool>)1) ? (((val<unsigned long long int>) ((val<unsigned long long int>) var_12))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))))))));
    /* LoopNest 3 */
    #pragma clang loop interleave(enable)
    #pragma clang loop unroll(enable)
    for (val<long long int> i_0 = 3LL/*3*/; i_0 < ((((/* implicit */val<long long int>) min((var_0), (((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) min((var_8), (((/* implicit */val<int>) var_3))))))))))) + (10LL))/*10*/; i_0 += ((((/* implicit */val<long long int>) max((((/* implicit */val<unsigned short>) (val<bool>)1)), (var_3)))) - (23249LL))/*1*/) 
    {
        #pragma clang loop vectorize(enable)
        for (val<unsigned short> i_1 = ((/* implicit */val<int>) ((/* implicit */val<unsigned short>) min(((val<bool>)1), (min(((val<bool>)1), ((val<bool>)1))))))/*1*/; i_1 < ((((/* implicit */val<int>) ((/* implicit */val<unsigned short>) var_8))) - (62659))/*10*/; i_1 += ((((/* implicit */val<int>) var_5)) - (39967))/*1*/) 
        {
            #pragma clang loop interleave(enable)
            #pragma clang loop vectorize_predicate(enable)
            #pragma clang loop unroll(enable)
            for (val<unsigned int> i_2 = ((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)121))) * (arr_1 [3U] [i_1])))) ? (((/* implicit */val<long long int>) arr_3 [i_0])) : (-1061317782135563984LL))))))) + (2U))/*2*/; i_2 < 10U/*10*/; i_2 += ((((/* implicit */val<unsigned int>) (+(((((/* implicit */val<bool>) ((val<int>) var_5))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)49025))) & (arr_3 [i_0])))) : (((((/* implicit */val<bool>) arr_3 [i_1])) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)496))) : (arr_1 [i_0] [i_0])))))))) - (35967U))/*1*/) 
            {
                {
                    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) 67107840LL)) ? (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (((val<bool>)1) && (((/* implicit */val<bool>) var_9)))))))) : (max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)37679))) : (arr_3 [i_1])))), (((67107840LL) / (((/* implicit */val<long long int>) arr_3 [i_1]))))))));
                    *var_15 = ((/* implicit */val<unsigned int>) (!((val<bool>)1)));
                    *var_16 ^= ((/* implicit */val<int>) min((arr_1 [i_0] [1U]), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (arr_1 [i_1] [i_0]) : (((/* implicit */val<unsigned long long int>) 1241466363U))))) ? (((/* implicit */val<long long int>) (+(4292870144U)))) : (((((/* implicit */val<bool>) (val<short>)9404)) ? (arr_0 [i_2]) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)37702))))))))));
                }
            } 
        } 
    } 
}
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2495735923U;
unsigned int var_2 = 292468240U;
unsigned short var_3 = (unsigned short)23250;
unsigned short var_5 = (unsigned short)39968;
unsigned char var_7 = (unsigned char)247;
int var_8 = -1781336883;
unsigned short var_9 = (unsigned short)43598;
unsigned long long int var_12 = 7717014958611763607ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)68;
short var_14 = (short)-14163;
unsigned int var_15 = 2094302272U;
int var_16 = 1596752578;
long long int arr_0 [12] ;
unsigned long long int arr_1 [12] [12] ;
unsigned int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -5136119668104109180LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 11548596861846397625ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 731761888U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_7, var_8, var_9, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  std::cout << "Result: " << seed << std::endl;
}
