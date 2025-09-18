/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 84
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=84
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
void test(val<unsigned long long int> var_1, val<long long int> var_2, val<int> zero, val<unsigned short*> var_18, val<unsigned long long int*> var_19, val<long long int*> var_20) {
    *var_18 = (val<unsigned short>)127;
    *var_19 = var_1;
    *var_20 = var_2;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1950675281210661816ULL;
long long int var_2 = 3508934746450485986LL;
int zero = 0;
unsigned short var_18 = (unsigned short)55638;
unsigned long long int var_19 = 15369979002037996801ULL;
long long int var_20 = 5787726850062402026LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)127;
    value_mismatch |= var_19 != 1950675281210661816ULL;
    value_mismatch |= var_20 != 3508934746450485986LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, zero, &var_18, &var_19, &var_20);
  checksum();
}
