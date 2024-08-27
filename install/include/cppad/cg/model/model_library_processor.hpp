#ifndef CPPAD_CG_MODEL_LIBRARY_PROCESSOR_INCLUDED
#define CPPAD_CG_MODEL_LIBRARY_PROCESSOR_INCLUDED
/* --------------------------------------------------------------------------
 *  CppADCodeGen: C++ Algorithmic Differentiation with Source Code Generation:
 *    Copyright (C) 2013 Ciengis
 *    Copyright (C) 2018 Joao Leal
 *
 *  CppADCodeGen is distributed under multiple licenses:
 *
 *   - Eclipse Public License Version 1.0 (EPL1), and
 *   - GNU General Public License Version 3 (GPL3).
 *
 *  EPL1 terms and conditions can be found in the file "epl-v10.txt", while
 *  terms and conditions for the GPL3 can be found in the file "gpl3.txt".
 * ----------------------------------------------------------------------------
 * Author: Joao Leal
 */

namespace CppAD {
namespace cg {

/**
 * Uses source code generated by a model library source-code generator.
 *
 * @author Joao Leal
 */
template<class Base>
class ModelLibraryProcessor {
protected:
    ModelLibraryCSourceGen<Base>* modelLibraryHelper_;
public:

    inline ModelLibraryProcessor(ModelLibraryCSourceGen<Base>& modelLibraryHelper) :
        modelLibraryHelper_(&modelLibraryHelper) {
    }

    inline virtual ~ModelLibraryProcessor() = default;

protected:

    inline const std::map<std::string, std::string>& getLibrarySources() {
        return modelLibraryHelper_->getLibrarySources();
    }

    inline const std::map<std::string, std::string>& getSources(ModelCSourceGen<Base>& model) {
        return model.getSources(modelLibraryHelper_->getMultiThreading(), modelLibraryHelper_);
    }

};

} // END cg namespace
} // END CppAD namespace

#endif
