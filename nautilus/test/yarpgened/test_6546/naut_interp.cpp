/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6546
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6546
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
void test(val<int> var_4, val<int> zero, val<unsigned short*> var_18, val<long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) min((*var_18), (((/* implicit */val<unsigned short>) var_4))));
    *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((33554431U), (((/* implicit */val<unsigned int>) (val<unsigned short>)27873))))) && (((/* implicit */val<bool>) min(((+(var_4))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)173))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 152917365;
int zero = 0;
unsigned short var_18 = (unsigned short)57009;
long long int var_19 = -3324180788297152414LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)21877;
    value_mismatch |= var_19 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_18, &var_19);
  checksum();
}
