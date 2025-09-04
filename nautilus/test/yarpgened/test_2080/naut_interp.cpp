/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2080
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2080
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
void test(val<unsigned short> var_5, val<bool> var_11, val<bool> var_18, val<long long int> var_19, val<int> zero, val<unsigned long long int*> var_20, val<int*> var_21, val<short*> var_22) {
    *var_20 = ((/* implicit */val<unsigned long long int>) (val<unsigned short>)15350);
    *var_21 = ((/* implicit */val<int>) (((!(((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<bool>)1)) + (((/* implicit */val<int>) (val<bool>)1))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : (var_19)));
    *var_22 = ((/* implicit */val<short>) (~(((((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) (val<bool>)1)), ((val<unsigned char>)214)))) & (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_18)), (var_5))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)57862;
bool var_11 = (bool)0;
bool var_18 = (bool)0;
long long int var_19 = 1350856615641596143LL;
int zero = 0;
unsigned long long int var_20 = 14507798944001691338ULL;
int var_21 = -767576696;
short var_22 = (short)-14728;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 15350ULL;
    value_mismatch |= var_21 != 1305329903;
    value_mismatch |= var_22 != (short)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_11, var_18, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
