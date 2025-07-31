
/*
yarpgen version 2.0 (build 27a5fb5 on 1980:01:01)
Seed: 12
Invocation: ./yarpgen --seed=12 --nautilus=true -o /home/marg/nes/nautilus/yarpgen-stuff/test_12
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>

using namespace nautilus;

void test(val<int> var_11, val<unsigned short*> var_12, val<unsigned short*> var_13, val<unsigned short*> var_14) {
    *var_13 =
        ((val<unsigned short>) (
        (
            (
                (val<long long int>)
                ((
                    (
                        (val<unsigned int>)
                        (
                            (((val<bool>) 18446744073709551615ULL))
                            ? (((val<int>) (val<unsigned char>)21))
                            : (((val<int>) (val<short>)-16922))))) + (((val<unsigned int>) var_11))
                )))))
        ;
}

int var_11 = -835834387;
unsigned short var_1 = (unsigned short)11253;
unsigned short var_2 = (unsigned short)46125;
unsigned short var_14 = (unsigned short)9390;
void init() {
}

int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", true);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, &var_1, &var_2, &var_14);
  std::cout << "var_12: " << var_1 << std::endl;
  std::cout << "var_13: " << var_2 << std::endl;
  std::cout << "var_14: " << var_14 << std::endl;
}
