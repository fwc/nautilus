/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3842
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3842
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
void test(val<signed char> var_1, val<unsigned char> var_3, val<unsigned long long int> var_8, val<unsigned long long int> var_9, val<unsigned char> var_11, val<unsigned long long int> var_13, val<int> zero, val<bool*> var_14, val<unsigned long long int*> var_15, val<bool*> var_16, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18) {
    *var_14 = ((/* implicit */val<bool>) var_11);
    *var_15 = ((/* implicit */val<unsigned long long int>) min((var_11), (((/* implicit */val<unsigned char>) var_1))));
    *var_16 = ((((/* implicit */val<bool>) var_8)) || (((((/* implicit */val<bool>) var_1)) || (((/* implicit */val<bool>) (val<unsigned short>)23229)))));
    *var_17 = min((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((val<short>) var_13)))))), (((((/* implicit */val<bool>) ((val<unsigned long long int>) var_3))) ? (var_9) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))))));
    *var_18 = min((((val<unsigned long long int>) 3013723183102174354ULL)), (((/* implicit */val<unsigned long long int>) ((val<unsigned char>) (!(((/* implicit */val<bool>) -6498669056278952464LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-74;
unsigned char var_3 = (unsigned char)134;
unsigned long long int var_8 = 7328846381693145666ULL;
unsigned long long int var_9 = 14972131104411007827ULL;
unsigned char var_11 = (unsigned char)64;
unsigned long long int var_13 = 4641190776030455238ULL;
int zero = 0;
bool var_14 = (bool)1;
unsigned long long int var_15 = 88349276577641150ULL;
bool var_16 = (bool)1;
unsigned long long int var_17 = 2462579975842971187ULL;
unsigned long long int var_18 = 6974844896836725843ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 64ULL;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 0ULL;
    value_mismatch |= var_18 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_8, var_9, var_11, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
