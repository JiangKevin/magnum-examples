#ifndef Magnum_Examples_TriangleExample_h
#define Magnum_Examples_TriangleExample_h
/*
    Copyright © 2010, 2011, 2012 Vladimír Vondruš <mosra@centrum.cz>

    This file is part of Magnum.

    Magnum is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License version 3
    only, as published by the Free Software Foundation.

    Magnum is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU Lesser General Public License version 3 for more details.
*/

#include <Mesh.h>
#include <Contexts/GlutWindowContext.h>

#include "TriangleShader.h"

namespace Magnum { namespace Examples {

class TriangleExample: public Magnum::Contexts::GlutWindowContext {
    public:
        TriangleExample(int& argc, char** argv);

    protected:
        void viewportEvent(const Magnum::Math::Vector2<GLsizei>& size);
        void drawEvent();

    private:
        Magnum::Mesh mesh;
        TriangleShader shader;
};

}}

#endif