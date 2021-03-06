/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGNumber.h"

#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGNumber);

/* Hash table */

static const HashTableValue JSSVGNumberTableValues[2] =
{
    { "value", DontDelete, (intptr_t)jsSVGNumberValue, (intptr_t)setJSSVGNumberValue },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGNumberTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGNumberTableValues, 0 };
#else
    { 2, 1, JSSVGNumberTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGNumberPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGNumberPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGNumberPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGNumberPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGNumberPrototype::s_info = { "SVGNumberPrototype", 0, &JSSVGNumberPrototypeTable, 0 };

JSObject* JSSVGNumberPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGNumber>(exec, globalObject);
}

const ClassInfo JSSVGNumber::s_info = { "SVGNumber", 0, &JSSVGNumberTable, 0 };

JSSVGNumber::JSSVGNumber(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<JSSVGPODTypeWrapper<float> > impl, SVGElement* context)
    : DOMObjectWithSVGContext(structure, globalObject, context)
    , m_impl(impl)
{
}

JSSVGNumber::~JSSVGNumber()
{
    forgetDOMObject(this, impl());
}

JSObject* JSSVGNumber::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGNumberPrototype(JSSVGNumberPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGNumber::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGNumber, Base>(exec, &JSSVGNumberTable, this, propertyName, slot);
}

bool JSSVGNumber::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGNumber, Base>(exec, &JSSVGNumberTable, this, propertyName, descriptor);
}

JSValue jsSVGNumberValue(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGNumber* castedThis = static_cast<JSSVGNumber*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    float imp(*castedThis->impl());
    return jsNumber(exec, imp);
}

void JSSVGNumber::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGNumber, Base>(exec, propertyName, value, &JSSVGNumberTable, this, slot);
}

void setJSSVGNumberValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    float imp(*static_cast<JSSVGNumber*>(thisObject)->impl());
    imp = value.toFloat(exec);
        static_cast<JSSVGNumber*>(thisObject)->impl()->commitChange(imp, static_cast<JSSVGNumber*>(thisObject)->context());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, JSSVGPODTypeWrapper<float>* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGNumber, JSSVGPODTypeWrapper<float> >(exec, globalObject, object, context);
}
float toSVGNumber(JSC::JSValue value)
{
    return value.inherits(&JSSVGNumber::s_info) ? (float) *static_cast<JSSVGNumber*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
