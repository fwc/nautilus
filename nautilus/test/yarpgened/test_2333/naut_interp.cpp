/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2333
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2333
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
void test(val<signed char> var_0, val<unsigned long long int> var_7, val<unsigned long long int> var_11, val<unsigned char> var_12, val<int> zero, val<signed char*> var_16, val<bool*> var_17, val<int*> var_18, val<unsigned short*> var_19) {
    *var_16 += ((/* implicit */val<signed char>) ((val<unsigned long long int>) (val<short>)-10298));
    *var_17 = ((/* implicit */val<bool>) max((*var_17), (((/* implicit */val<bool>) var_7))));
    *var_18 = ((/* implicit */val<int>) max((*var_18), ((~(max((((/* implicit */val<int>) var_12)), (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<signed char>)-103))))))))));
    *var_19 = ((/* implicit */val<unsigned short>) max(((val<signed char>)90), ((val<signed char>)102)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
unsigned long long int var_7 = 7835370870470127384ULL;
unsigned long long int var_11 = 2592342650464113286ULL;
unsigned char var_12 = (unsigned char)171;
int zero = 0;
signed char var_16 = (signed char)-5;
bool var_17 = (bool)0;
int var_18 = -510692729;
unsigned short var_19 = (unsigned short)48040;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-63;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != -172;
    value_mismatch |= var_19 != (unsigned short)102;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_11, var_12, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
