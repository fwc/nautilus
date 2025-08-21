/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 719
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=719
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
void test(val<int> var_0, val<bool> var_7, val<short> var_9, val<unsigned char> var_11, val<signed char> var_13, val<int> zero, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned long long int>) ((min((max((14338583536917603369ULL), (((/* implicit */val<unsigned long long int>) var_11)))), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_13))))))) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9)))));
    *var_16 = min((((/* implicit */val<unsigned long long int>) (~((~(var_0)))))), (((max((14338583536917603347ULL), (((/* implicit */val<unsigned long long int>) (val<signed char>)-115)))) | (min((((/* implicit */val<unsigned long long int>) var_7)), (4108160536791948268ULL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1792092224;
bool var_7 = (bool)0;
short var_9 = (short)-14798;
unsigned char var_11 = (unsigned char)190;
signed char var_13 = (signed char)-36;
int zero = 0;
unsigned long long int var_15 = 15931863824167365425ULL;
unsigned long long int var_16 = 10298063297163301934ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0ULL;
    value_mismatch |= var_16 != 1792092224ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_9, var_11, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
