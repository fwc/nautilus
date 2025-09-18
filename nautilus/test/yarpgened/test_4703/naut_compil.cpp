/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4703
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4703
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
void test(val<unsigned long long int> var_10, val<unsigned long long int> var_14, val<int> zero, val<bool*> var_17, val<unsigned long long int*> var_18, val<signed char*> var_19) {
    if ((!(((/* implicit */val<bool>) (+(13059311078198101964ULL))))))
    {
        *var_17 = ((/* implicit */val<bool>) (-((+((+(var_14)))))));
        *var_18 = min((((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) 1381801578U)))))))), (13059311078198101940ULL));
    }

    *var_19 = ((/* implicit */val<signed char>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 7982340498079667070ULL;
unsigned long long int var_14 = 13601347541105128801ULL;
int zero = 0;
bool var_17 = (bool)0;
unsigned long long int var_18 = 2180059803394685867ULL;
signed char var_19 = (signed char)-9;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != 2180059803394685867ULL;
    value_mismatch |= var_19 != (signed char)126;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_14, zero, &var_17, &var_18, &var_19);
  checksum();
}
