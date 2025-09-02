/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5373
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5373
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
void test(val<int> var_0, val<unsigned char> var_9, val<short> var_10, val<short> var_13, val<long long int> var_14, val<short> var_15, val<int> zero, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19, val<short*> var_20, val<bool*> var_21, val<unsigned long long int*> var_22, val<unsigned long long int*> var_23) {
    *var_17 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) (~(((((/* implicit */val<int>) (val<unsigned char>)51)) >> (((((/* implicit */val<int>) var_10)) + (1692)))))))), (((val<unsigned int>) var_9))));
    *var_18 = ((/* implicit */val<unsigned long long int>) ((val<signed char>) 15491669681147636789ULL));
    if (((/* implicit */val<bool>) 2122765731678987033ULL))
    {
        *var_19 = ((/* implicit */val<unsigned long long int>) ((val<short>) var_14));
        *var_20 = ((/* implicit */val<short>) ((val<unsigned long long int>) var_13));
        *var_21 = ((/* implicit */val<bool>) var_15);
        *var_22 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)71)) ? (((/* implicit */val<int>) (val<unsigned char>)184)) : (((/* implicit */val<int>) (val<unsigned short>)53774))));
    }

    *var_23 = ((/* implicit */val<unsigned long long int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 941971938;
unsigned char var_9 = (unsigned char)250;
short var_10 = (short)-1692;
short var_13 = (short)32607;
long long int var_14 = -3359754874228992892LL;
short var_15 = (short)15204;
int zero = 0;
unsigned long long int var_17 = 42080427605171239ULL;
unsigned long long int var_18 = 8058572981662763440ULL;
unsigned long long int var_19 = 5658275266756641183ULL;
short var_20 = (short)-14545;
bool var_21 = (bool)0;
unsigned long long int var_22 = 12710743297252067767ULL;
unsigned long long int var_23 = 16060518423713958015ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 4294967244ULL;
    value_mismatch |= var_18 != 53ULL;
    value_mismatch |= var_19 != 18446744073709524100ULL;
    value_mismatch |= var_20 != (short)32607;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 184ULL;
    value_mismatch |= var_23 != 941971938ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_9, var_10, var_13, var_14, var_15, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
