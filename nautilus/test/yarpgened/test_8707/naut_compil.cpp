/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8707
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8707
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned short> var_0, val<unsigned short> var_2, val<long long int> var_3, val<signed char> var_4, val<long long int> var_5, val<signed char> var_9, val<long long int> var_10, val<unsigned int> var_12, val<unsigned int> var_16, val<int> var_17, val<unsigned long long int> var_18, val<unsigned char> var_19, val<int> zero, val<unsigned char*> var_20, val<signed char*> var_21, val<unsigned char*> var_22, val<signed char*> var_23, val<signed char*> var_24, val<unsigned short*> var_25, val<unsigned char*> var_26) {
    *var_20 = ((/* implicit */val<unsigned char>) min((*var_20), (((/* implicit */val<unsigned char>) ((((((/* implicit */val<int>) (val<short>)-6707)) + (2147483647))) >> ((((+(((15470886160127264057ULL) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)16259))))))) - (951527533066426ULL))))))));
    *var_21 -= ((/* implicit */val<signed char>) max((((/* implicit */val<int>) (((~(var_10))) != (((/* implicit */val<long long int>) ((val<int>) var_5)))))), (var_17)));
    if (((((/* implicit */val<unsigned long long int>) (+((-(var_5)))))) != (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((var_5) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)122)))))) : ((+(8989607068696576ULL)))))))
    {
        *var_22 = ((/* implicit */val<unsigned char>) max((*var_22), (((/* implicit */val<unsigned char>) ((((max((var_16), (((/* implicit */val<unsigned int>) var_9)))) >> (((((((/* implicit */val<int>) var_4)) >> (((/* implicit */val<int>) (val<short>)0)))) - (87))))) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<long long int>) 2147483647)) : (var_3))) != (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((var_16) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))))))))))))))));
        *var_23 = ((/* implicit */val<signed char>) min((*var_23), (((/* implicit */val<signed char>) ((((/* implicit */val<int>) (((~(var_18))) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_4)), (var_19)))))))) != (((/* implicit */val<int>) (val<short>)-17830)))))));
        *var_24 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) (val<short>)17829)) ? (((/* implicit */val<int>) (val<signed char>)88)) : (-107026945))), (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<short>)-17842)) != (var_17))))))) ? (((/* implicit */val<int>) (val<unsigned char>)7)) : (((val<int>) var_12))));
        *var_25 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) var_3)) != ((+(min((((/* implicit */val<unsigned long long int>) (val<unsigned short>)61699)), (var_18)))))));
        *var_26 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) -3181023192852937536LL)) != (5350355262886267668ULL)))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42544;
unsigned short var_2 = (unsigned short)529;
long long int var_3 = -3034161004050205604LL;
signed char var_4 = (signed char)104;
long long int var_5 = -7373743370262718116LL;
signed char var_9 = (signed char)126;
long long int var_10 = 6172364516874777523LL;
unsigned int var_12 = 812140058U;
unsigned int var_16 = 1362662229U;
int var_17 = -1049626818;
unsigned long long int var_18 = 6680334774316415570ULL;
unsigned char var_19 = (unsigned char)73;
int zero = 0;
unsigned char var_20 = (unsigned char)210;
signed char var_21 = (signed char)-69;
unsigned char var_22 = (unsigned char)255;
signed char var_23 = (signed char)-16;
signed char var_24 = (signed char)101;
unsigned short var_25 = (unsigned short)41810;
unsigned char var_26 = (unsigned char)249;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)210;
    value_mismatch |= var_21 != (signed char)-70;
    value_mismatch |= var_22 != (unsigned char)255;
    value_mismatch |= var_23 != (signed char)-16;
    value_mismatch |= var_24 != (signed char)7;
    value_mismatch |= var_25 != (unsigned short)1;
    value_mismatch |= var_26 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_9, var_10, var_12, var_16, var_17, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26);
  checksum();
  assert(!value_mismatch);
}
