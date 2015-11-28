#ifndef __DSENT_MODEL_STD_CELLS_NOR2_H__
#define __DSENT_MODEL_STD_CELLS_NOR2_H__

#include "util/CommonType.h"
#include "model/std_cells/StdCell.h"

namespace DSENT
{
    class NOR2 : public StdCell
    {
        public:
            NOR2(const String& instance_name_, const TechModel* tech_model_);
            virtual ~NOR2();

        public:
            // Set a list of properties' name needed to construct model
            void initProperties();

            // Cache the standard cell
            void cacheStdCell(StdCellLib* cell_lib_, double drive_strength_);

        protected:
            // Build the model
            virtual void constructModel();
            virtual void updateModel();
            virtual void useModel();
            virtual void propagateTransitionInfo();

    }; // class NOR2
} // namespace DSENT

#endif // __DSENT_MODEL_STD_CELLS_NOR2_H__

