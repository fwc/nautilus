/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5352
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5352
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
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
void test(val<unsigned int> var_2, val<unsigned short> var_3, val<signed char> var_4, val<unsigned short> var_6, val<unsigned short> var_7, val<unsigned char> var_8, val<signed char> var_9, val<unsigned short> var_10, val<unsigned char> var_12, val<bool> var_13, val<unsigned long long int> var_14, val<int> zero, val<signed char*> var_15, val<long long int*> var_16, val<unsigned int*> var_17, val<signed char*> var_18, val<bool*> var_19) {
    *var_15 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (+(var_14)))) ? (max((((/* implicit */val<long long int>) max((var_10), (((/* implicit */val<unsigned short>) (val<signed char>)111))))), (max((-3286512955689622095LL), (3286512955689622107LL))))) : ((~(3286512955689622094LL)))));
    *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_7)) || (((/* implicit */val<bool>) (+(4049654092U)))))))) - (((((((/* implicit */val<bool>) var_4)) || (((/* implicit */val<bool>) var_8)))) ? (max((var_14), (((/* implicit */val<unsigned long long int>) var_3)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13)))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((val<unsigned int>) (val<unsigned char>)255))) & (((((/* implicit */val<bool>) 3286512955689622094LL)) ? (-3286512955689622114LL) : (-3298689151692844236LL)))))) ? (-3286512955689622109LL) : (((/* implicit */val<long long int>) (-(((((/* implicit */val<int>) (val<bool>)1)) / (((/* implicit */val<int>) (val<signed char>)-45))))))))))
    {
        *var_17 |= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) ((val<bool>) 3286512955689622109LL))) >> (((((/* implicit */val<int>) (val<unsigned short>)29631)) - (29618)))))) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) (val<signed char>)-1)), (var_3)))) && (((/* implicit */val<bool>) var_12)))))));
        *var_18 &= ((/* implicit */val<signed char>) max(((val<unsigned short>)48196), (((/* implicit */val<unsigned short>) var_9))));
    }

    *var_19 |= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (val<unsigned short>)39795)), (-5568786741860368578LL)))) ? (((((/* implicit */val<bool>) var_6)) ? (0U) : (var_2))) : (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (val<unsigned short>)35904)))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((((-3286512955689622105LL) + (9223372036854775807LL))) >> (((var_14) - (13354078201132977650ULL)))))) > (max((var_14), (((/* implicit */val<unsigned long long int>) (val<bool>)1)))))))) : (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_8)) > (((/* implicit */val<int>) (val<unsigned short>)0))))), (((2053320054542517802ULL) << (((((/* implicit */val<int>) var_3)) - (61834)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 903013604U;
unsigned short var_3 = (unsigned short)61877;
signed char var_4 = (signed char)3;
unsigned short var_6 = (unsigned short)27397;
unsigned short var_7 = (unsigned short)37959;
unsigned char var_8 = (unsigned char)127;
signed char var_9 = (signed char)33;
unsigned short var_10 = (unsigned short)30964;
unsigned char var_12 = (unsigned char)15;
bool var_13 = (bool)1;
unsigned long long int var_14 = 13354078201132977652ULL;
int zero = 0;
signed char var_15 = (signed char)96;
long long int var_16 = 3764050621220003963LL;
unsigned int var_17 = 1732407299U;
signed char var_18 = (signed char)-19;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)91;
    value_mismatch |= var_16 != 5092665872576573965LL;
    value_mismatch |= var_17 != 1732407299U;
    value_mismatch |= var_18 != (signed char)68;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_10, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
