/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2585
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2585
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
void test(val<long long int> var_6, val<unsigned int> var_10, val<int> zero, val<signed char*> var_20, val<unsigned short*> var_21, val<long long int*> var_22, val<unsigned int*> var_23) {
    *var_20 = ((/* implicit */val<signed char>) var_6);
    *var_21 = ((/* implicit */val<unsigned short>) var_10);
    *var_22 = var_6;
    *var_23 = ((/* implicit */val<unsigned int>) -8096452357884752942LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -757353079450181036LL;
unsigned int var_10 = 768233782U;
int zero = 0;
signed char var_20 = (signed char)-71;
unsigned short var_21 = (unsigned short)16707;
long long int var_22 = -7091101532355709182LL;
unsigned int var_23 = 4129782725U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)84;
    value_mismatch |= var_21 != (unsigned short)20790;
    value_mismatch |= var_22 != -757353079450181036LL;
    value_mismatch |= var_23 != 862440402U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_10, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
