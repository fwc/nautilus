/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9619
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9619
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
void test(val<signed char> var_10, val<signed char> var_16, val<int> zero, val<unsigned char*> var_18, val<unsigned short*> var_19) {
    *var_18 = ((/* implicit */val<unsigned char>) max((*var_18), (((/* implicit */val<unsigned char>) min((16157210799533199446ULL), (((/* implicit */val<unsigned long long int>) 4294967295U)))))));
    *var_19 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) (val<signed char>)58)) ? (16157210799533199446ULL) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<short>)32767)) * (((/* implicit */val<int>) (val<short>)-32754))))))) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((var_16), (var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-112;
signed char var_16 = (signed char)-111;
int zero = 0;
unsigned char var_18 = (unsigned char)53;
unsigned short var_19 = (unsigned short)32872;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)255;
    value_mismatch |= var_19 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_16, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
