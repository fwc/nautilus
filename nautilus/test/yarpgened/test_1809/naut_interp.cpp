/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1809
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1809
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
void test(val<signed char> var_0, val<unsigned short> var_6, val<bool> var_8, val<bool> var_10, val<unsigned char> var_12, val<int> var_13, val<int> zero, val<unsigned long long int*> var_14, val<int*> var_15, val<unsigned char*> var_16) {
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) (val<unsigned char>)3)) <= (((/* implicit */val<int>) (val<unsigned char>)253)))) ? (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_10)) : (-1970819512))) : (((var_8) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<unsigned short>)65535))))))) ? (((/* implicit */val<int>) ((val<bool>) (+(((/* implicit */val<int>) var_8)))))) : (((/* implicit */val<int>) var_12))));
    *var_15 = ((/* implicit */val<int>) max((*var_15), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_8)) | (((/* implicit */val<int>) var_12)))) ^ (((/* implicit */val<int>) min((var_10), (var_10))))))))))));
    *var_16 = ((/* implicit */val<unsigned char>) min((*var_16), (((/* implicit */val<unsigned char>) (-(((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_0)) : (((((/* implicit */val<bool>) (val<signed char>)-72)) ? (((/* implicit */val<int>) (val<signed char>)-1)) : (var_13))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
unsigned short var_6 = (unsigned short)35797;
bool var_8 = (bool)0;
bool var_10 = (bool)0;
unsigned char var_12 = (unsigned char)195;
int var_13 = -1055537123;
int zero = 0;
unsigned long long int var_14 = 12460077672947273668ULL;
int var_15 = 599645217;
unsigned char var_16 = (unsigned char)188;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 195ULL;
    value_mismatch |= var_15 != 599645217;
    value_mismatch |= var_16 != (unsigned char)145;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_8, var_10, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
