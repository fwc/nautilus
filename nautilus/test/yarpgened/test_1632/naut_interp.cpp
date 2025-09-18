/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1632
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1632
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
void test(val<unsigned short> var_1, val<short> var_2, val<short> var_4, val<int> var_8, val<unsigned short> var_9, val<signed char> var_10, val<signed char> var_12, val<int> zero, val<bool*> var_13, val<unsigned int*> var_14, val<unsigned char*> var_15, val<unsigned char*> var_16) {
    *var_13 = ((/* implicit */val<bool>) ((((((/* implicit */val<bool>) min(((val<short>)(-32767 - 1)), ((val<short>)19358)))) || (((/* implicit */val<bool>) min((((/* implicit */val<signed char>) (val<bool>)1)), ((val<signed char>)0)))))) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)1)) < (var_8)))) : (var_8)));
    *var_14 = ((/* implicit */val<unsigned int>) ((min((((((/* implicit */val<int>) var_1)) * (((/* implicit */val<int>) (val<signed char>)-9)))), (((/* implicit */val<int>) var_4)))) + (((/* implicit */val<int>) ((((/* implicit */val<int>) min((var_9), (((/* implicit */val<unsigned short>) (val<signed char>)-15))))) == (((((/* implicit */val<int>) (val<bool>)1)) | (((/* implicit */val<int>) var_4)))))))));
    *var_15 = ((/* implicit */val<unsigned char>) max((var_2), (((/* implicit */val<short>) (val<bool>)1))));
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (val<unsigned short>)35015)) == (((/* implicit */val<int>) ((((/* implicit */val<int>) var_10)) >= (((((/* implicit */val<int>) var_1)) >> (((((/* implicit */val<int>) var_12)) + (32))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41376;
short var_2 = (short)-6006;
short var_4 = (short)18263;
int var_8 = -684790926;
unsigned short var_9 = (unsigned short)57577;
signed char var_10 = (signed char)-37;
signed char var_12 = (signed char)-1;
int zero = 0;
bool var_13 = (bool)1;
unsigned int var_14 = 915595748U;
unsigned char var_15 = (unsigned char)197;
unsigned char var_16 = (unsigned char)106;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)0;
    value_mismatch |= var_14 != 4294594912U;
    value_mismatch |= var_15 != (unsigned char)1;
    value_mismatch |= var_16 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_8, var_9, var_10, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
