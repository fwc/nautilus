/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8866
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8866
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
void test(val<long long int> var_0, val<unsigned long long int> var_3, val<int> var_8, val<int> zero, val<unsigned short*> var_12, val<unsigned long long int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned short>) max((*var_12), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) min((((((/* implicit */val<long long int>) var_8)) + (var_0))), (((/* implicit */val<long long int>) (+(629452487U))))))))))));
    *var_13 = min((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) 3665514785U))))), (min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 1811797594776984351ULL)) && (((/* implicit */val<bool>) (val<unsigned char>)18))))), (min((var_3), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)224)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2597746842000432201LL;
unsigned long long int var_3 = 17858366988694362612ULL;
int var_8 = 1835709865;
int zero = 0;
unsigned short var_12 = (unsigned short)49677;
unsigned long long int var_13 = 12578024813261898821ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)49677;
    value_mismatch |= var_13 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_8, zero, &var_12, &var_13);
  checksum();
}
