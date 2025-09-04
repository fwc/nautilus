/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6776
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6776
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
void test(val<unsigned int> var_2, val<long long int> var_5, val<unsigned char> var_9, val<short> var_10, val<int> var_13, val<unsigned long long int> var_16, val<unsigned char> var_18, val<int> zero, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned long long int>) max((var_5), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((var_13), (((/* implicit */val<int>) var_10))))) ? (((((/* implicit */val<bool>) var_16)) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_18))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-13045))))))));
    *var_20 -= ((/* implicit */val<unsigned long long int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3054129621U;
long long int var_5 = -782190093440971170LL;
unsigned char var_9 = (unsigned char)103;
short var_10 = (short)12305;
int var_13 = -1266411293;
unsigned long long int var_16 = 5839128711393695673ULL;
unsigned char var_18 = (unsigned char)135;
int zero = 0;
unsigned long long int var_19 = 14529476166692474810ULL;
unsigned long long int var_20 = 10706607012477543177ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 3054129621ULL;
    value_mismatch |= var_20 != 10706607012477543074ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_9, var_10, var_13, var_16, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
