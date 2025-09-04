/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6860
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6860
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
void test(val<unsigned long long int> var_0, val<long long int> var_14, val<int> zero, val<bool*> var_16, val<unsigned short*> var_17, val<unsigned char*> var_18) {
    *var_16 = ((/* implicit */val<bool>) var_14);
    *var_17 = ((/* implicit */val<unsigned short>) ((var_0) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)17114)))));
    *var_18 = ((/* implicit */val<unsigned char>) -1818572673);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8214366430284704521ULL;
long long int var_14 = 6762153867362437111LL;
int zero = 0;
bool var_16 = (bool)1;
unsigned short var_17 = (unsigned short)31169;
unsigned char var_18 = (unsigned char)86;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (unsigned short)1;
    value_mismatch |= var_18 != (unsigned char)127;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
