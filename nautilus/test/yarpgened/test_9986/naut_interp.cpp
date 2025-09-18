/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9986
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9986
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
void test(val<unsigned long long int> var_2, val<int> var_6, val<int> var_8, val<int> var_9, val<int> zero, val<unsigned long long int*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<int>) ((4004948484120800102ULL) < (((/* implicit */val<unsigned long long int>) var_6))))), (((((/* implicit */val<bool>) var_9)) ? (2147483647) : (var_8))))))));
    *var_15 = var_2;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4787766276303313244ULL;
int var_6 = 1595096255;
int var_8 = -893957690;
int var_9 = -1575252493;
int zero = 0;
unsigned long long int var_14 = 9917410646656722023ULL;
unsigned long long int var_15 = 2409783993433812203ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0ULL;
    value_mismatch |= var_15 != 4787766276303313244ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_8, var_9, zero, &var_14, &var_15);
  checksum();
}
