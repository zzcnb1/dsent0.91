#ifndef __DSENT_MODEL_ELECTRICAL_MUXTREESERIALIZER_H__
#define __DSENT_MODEL_ELECTRICAL_MUXTREESERIALIZER_H__

#include "util/CommonType.h"
#include "model/ElectricalModel.h"

namespace DSENT
{
    class MuxTreeSerializer : public ElectricalModel
    {
        public:
            MuxTreeSerializer(const String& instance_name_, const TechModel* tech_model_);
            virtual ~MuxTreeSerializer();

        public:
            // Set a list of properties' name needed to construct model
            void initParameters();
            // Set a list of properties' name needed to construct model
            void initProperties();

            // Clone and return a new instance
            virtual MuxTreeSerializer* clone() const;

        protected:
            // Build the model
            virtual void constructModel();
            virtual void propagateTransitionInfo();

    }; // class MuxTreeSerializer
} // namespace DSENT

#endif // __DSENT_MODEL_ELECTRICAL_MUXTREESERIALIZER_H__

