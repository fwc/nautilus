/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8450
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8450
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
void test(val<int> var_4, val<unsigned char> var_8, val<long long int> var_16, val<int> zero, val<bool*> var_17, val<long long int*> var_18, val<long long int*> var_19, val<unsigned int*> var_20) {
    *var_17 = ((/* implicit */val<bool>) ((val<unsigned short>) min(((~(var_16))), (((/* implicit */val<long long int>) (~(0U)))))));
    *var_18 = ((/* implicit */val<long long int>) var_4);
    *var_19 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_8)))))));
    *var_20 = ((/* implicit */val<unsigned int>) 14194251118851740958ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1201607146;
unsigned char var_8 = (unsigned char)242;
long long int var_16 = -7619158754746072176LL;
int zero = 0;
bool var_17 = (bool)0;
long long int var_18 = 4404052151436499232LL;
long long int var_19 = -1894426985028071714LL;
unsigned int var_20 = 2268899680U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != 1201607146LL;
    value_mismatch |= var_19 != 0LL;
    value_mismatch |= var_20 != 802772254U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
