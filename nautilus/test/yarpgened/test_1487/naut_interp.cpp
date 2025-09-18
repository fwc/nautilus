/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1487
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1487
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
void test(val<signed char> var_1, val<int> var_2, val<signed char> var_7, val<unsigned long long int> var_10, val<unsigned short> var_11, val<unsigned long long int> var_15, val<bool> var_16, val<int> zero, val<short*> var_20, val<unsigned long long int*> var_21) {
    *var_20 = ((/* implicit */val<short>) min((*var_20), (((/* implicit */val<short>) ((((/* implicit */val<int>) var_11)) & (((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_15))))) ^ (var_2))))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_16)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_1)) || (((/* implicit */val<bool>) max((var_10), (((/* implicit */val<unsigned long long int>) 3783061329U))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)65;
int var_2 = -717483168;
signed char var_7 = (signed char)64;
unsigned long long int var_10 = 16485051801421310529ULL;
unsigned short var_11 = (unsigned short)12690;
unsigned long long int var_15 = 13761668561915429482ULL;
bool var_16 = (bool)1;
int zero = 0;
short var_20 = (short)31544;
unsigned long long int var_21 = 10743794973894347483ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)4352;
    value_mismatch |= var_21 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_10, var_11, var_15, var_16, zero, &var_20, &var_21);
  checksum();
}
