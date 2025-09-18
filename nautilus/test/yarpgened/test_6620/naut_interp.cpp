/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6620
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6620
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
void test(val<int> var_3, val<signed char> var_7, val<unsigned long long int> var_9, val<long long int> var_10, val<int> zero, val<bool*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((((/* implicit */val<bool>) var_9)) || (((/* implicit */val<bool>) var_10)));
    *var_16 += ((/* implicit */val<unsigned long long int>) ((val<signed char>) ((((((/* implicit */val<int>) var_7)) < (((/* implicit */val<int>) (val<signed char>)-101)))) ? (7182439342794043277LL) : (((/* implicit */val<long long int>) max((1801792691), (var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 295044862;
signed char var_7 = (signed char)32;
unsigned long long int var_9 = 5789839286776800756ULL;
long long int var_10 = -4039107782425028472LL;
int zero = 0;
bool var_15 = (bool)1;
unsigned long long int var_16 = 11890646308365756905ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 11890646308365756828ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_9, var_10, zero, &var_15, &var_16);
  checksum();
}
