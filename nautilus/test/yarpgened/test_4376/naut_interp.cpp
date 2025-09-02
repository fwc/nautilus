/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4376
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4376
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
void test(val<unsigned long long int> var_1, val<short> var_4, val<signed char> var_5, val<unsigned long long int> var_8, val<unsigned char> var_11, val<unsigned long long int> var_15, val<int> zero, val<unsigned char*> var_18, val<bool*> var_19, val<bool*> var_20) {
    *var_18 = ((/* implicit */val<unsigned char>) ((6810991467939301506ULL) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)0)))));
    *var_19 -= ((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned short>)54836))));
    *var_20 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (+((+(((/* implicit */val<int>) var_4))))))) ? (((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<int>) (val<unsigned char>)88)) + (((/* implicit */val<int>) var_5)))), (((((/* implicit */val<int>) var_11)) * (((/* implicit */val<int>) var_11))))))) : (min((min((var_1), (var_15))), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) + (var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4678191635507537018ULL;
short var_4 = (short)19132;
signed char var_5 = (signed char)118;
unsigned long long int var_8 = 6404127666017884571ULL;
unsigned char var_11 = (unsigned char)244;
unsigned long long int var_15 = 1654557618067948573ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)53;
bool var_19 = (bool)1;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)0;
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_8, var_11, var_15, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
