/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2131
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2131
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
void test(val<unsigned int> var_6, val<unsigned int> var_11, val<long long int> var_14, val<int> zero, val<unsigned long long int*> var_19, val<unsigned char*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned long long int>) var_11);
    *var_20 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<long long int>) ((val<unsigned short>) var_6))), (var_14)));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((val<short>) (!(((/* implicit */val<bool>) (+(1072122485U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 816160350U;
unsigned int var_11 = 3827844913U;
long long int var_14 = -4480016856650990436LL;
int zero = 0;
unsigned long long int var_19 = 7330640397242016672ULL;
unsigned char var_20 = (unsigned char)123;
unsigned long long int var_21 = 7521183899181840504ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 3827844913ULL;
    value_mismatch |= var_20 != (unsigned char)156;
    value_mismatch |= var_21 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_11, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
