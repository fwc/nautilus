/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8423
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8423
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
void test(val<unsigned long long int> var_0, val<signed char> var_1, val<int> var_2, val<unsigned long long int> var_4, val<signed char> var_5, val<unsigned long long int> var_7, val<unsigned long long int> var_8, val<signed char> var_9, val<int> zero, val<unsigned long long int*> var_10, val<signed char*> var_11, val<unsigned long long int*> var_12, val<signed char*> var_13, val<signed char*> var_14) {
    *var_10 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_9)) < (var_2)));
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)27))) * (max((((var_0) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))))), ((-(864691128455135232ULL)))))));
    *var_12 = ((var_7) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) (!(((/* implicit */val<bool>) (val<signed char>)-127))))))));
    *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_8)) || (((/* implicit */val<bool>) max((max((((/* implicit */val<unsigned long long int>) var_1)), (4072547484556224054ULL))), (((var_4) + (var_8))))))));
    *var_14 = ((/* implicit */val<signed char>) (-(((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_5)) & (((/* implicit */val<int>) var_9))))) ^ (((((/* implicit */val<bool>) (val<signed char>)-108)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-111))) : (var_7)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9711494792012107862ULL;
signed char var_1 = (signed char)32;
int var_2 = -672287706;
unsigned long long int var_4 = 14033132920657456550ULL;
signed char var_5 = (signed char)27;
unsigned long long int var_7 = 4366045630009533345ULL;
unsigned long long int var_8 = 9207605100112147950ULL;
signed char var_9 = (signed char)23;
int zero = 0;
unsigned long long int var_10 = 5459079133572400848ULL;
signed char var_11 = (signed char)-49;
unsigned long long int var_12 = 15993352580237619834ULL;
signed char var_13 = (signed char)44;
signed char var_14 = (signed char)-103;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0ULL;
    value_mismatch |= var_11 != (signed char)0;
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != (signed char)1;
    value_mismatch |= var_14 != (signed char)126;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
