/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2362
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2362
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
void test(val<bool> var_0, val<unsigned long long int> var_1, val<long long int> var_2, val<int> var_4, val<bool> var_6, val<signed char> var_7, val<bool> var_8, val<unsigned char> var_9, val<unsigned long long int> var_10, val<unsigned int> var_11, val<int> zero, val<int*> var_12, val<long long int*> var_13, val<long long int*> var_14, val<unsigned long long int*> var_15, val<signed char*> var_16) {
    *var_12 = ((/* implicit */val<int>) min((((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((val<short>) var_1))) > (((((/* implicit */val<int>) var_6)) ^ (((/* implicit */val<int>) var_0))))))), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) % (max((((/* implicit */val<long long int>) var_0)), (var_2)))))));
    *var_13 = ((/* implicit */val<long long int>) ((val<unsigned char>) ((((/* implicit */val<long long int>) ((val<unsigned int>) var_4))) ^ (max((var_2), (((/* implicit */val<long long int>) var_7)))))));
    *var_14 += ((/* implicit */val<long long int>) ((val<signed char>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) != (var_2))) ? (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (var_10))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) var_9)))))));
    *var_15 = ((/* implicit */val<unsigned long long int>) max((*var_15), (((/* implicit */val<unsigned long long int>) ((val<int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) var_8)))) : (var_11)))))));
    *var_16 += ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) var_11)), (var_2)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned long long int var_1 = 16295949174353459035ULL;
long long int var_2 = 8346737404272039982LL;
int var_4 = 2082660200;
bool var_6 = (bool)1;
signed char var_7 = (signed char)-33;
bool var_8 = (bool)1;
unsigned char var_9 = (unsigned char)105;
unsigned long long int var_10 = 8894057934074490621ULL;
unsigned int var_11 = 2340306982U;
int zero = 0;
int var_12 = 950721467;
long long int var_13 = -8670438578088272131LL;
long long int var_14 = 6209031502077857336LL;
unsigned long long int var_15 = 8643435564271649439ULL;
signed char var_16 = (signed char)-76;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1;
    value_mismatch |= var_13 != 70LL;
    value_mismatch |= var_14 != 6209031502077857337LL;
    value_mismatch |= var_15 != 8643435564271649439ULL;
    value_mismatch |= var_16 != (signed char)-38;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_7, var_8, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
