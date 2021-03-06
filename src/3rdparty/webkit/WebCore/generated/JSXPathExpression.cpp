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

#if ENABLE(XPATH)

#include "JSXPathExpression.h"

#include "JSNode.h"
#include "JSXPathResult.h"
#include "XPathExpression.h"
#include "XPathResult.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSXPathExpression);

/* Hash table */

static const HashTableValue JSXPathExpressionTableValues[2] =
{
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsXPathExpressionConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSXPathExpressionTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSXPathExpressionTableValues, 0 };
#else
    { 2, 1, JSXPathExpressionTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSXPathExpressionConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSXPathExpressionConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSXPathExpressionConstructorTableValues, 0 };
#else
    { 1, 0, JSXPathExpressionConstructorTableValues, 0 };
#endif

class JSXPathExpressionConstructor : public DOMConstructorObject {
public:
    JSXPathExpressionConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSXPathExpressionConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSXPathExpressionPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags)); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSXPathExpressionConstructor::s_info = { "XPathExpressionConstructor", 0, &JSXPathExpressionConstructorTable, 0 };

bool JSXPathExpressionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXPathExpressionConstructor, DOMObject>(exec, &JSXPathExpressionConstructorTable, this, propertyName, slot);
}

bool JSXPathExpressionConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSXPathExpressionConstructor, DOMObject>(exec, &JSXPathExpressionConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSXPathExpressionPrototypeTableValues[2] =
{
    { "evaluate", DontDelete|Function, (intptr_t)jsXPathExpressionPrototypeFunctionEvaluate, (intptr_t)3 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSXPathExpressionPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSXPathExpressionPrototypeTableValues, 0 };
#else
    { 2, 1, JSXPathExpressionPrototypeTableValues, 0 };
#endif

const ClassInfo JSXPathExpressionPrototype::s_info = { "XPathExpressionPrototype", 0, &JSXPathExpressionPrototypeTable, 0 };

JSObject* JSXPathExpressionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXPathExpression>(exec, globalObject);
}

bool JSXPathExpressionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSXPathExpressionPrototypeTable, this, propertyName, slot);
}

bool JSXPathExpressionPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSXPathExpressionPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSXPathExpression::s_info = { "XPathExpression", 0, &JSXPathExpressionTable, 0 };

JSXPathExpression::JSXPathExpression(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<XPathExpression> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSXPathExpression::~JSXPathExpression()
{
    forgetDOMObject(this, impl());
}

JSObject* JSXPathExpression::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSXPathExpressionPrototype(JSXPathExpressionPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSXPathExpression::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXPathExpression, Base>(exec, &JSXPathExpressionTable, this, propertyName, slot);
}

bool JSXPathExpression::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSXPathExpression, Base>(exec, &JSXPathExpressionTable, this, propertyName, descriptor);
}

JSValue jsXPathExpressionConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSXPathExpression* domObject = static_cast<JSXPathExpression*>(asObject(slot.slotBase()));
    return JSXPathExpression::getConstructor(exec, domObject->globalObject());
}
JSValue JSXPathExpression::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSXPathExpressionConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsXPathExpressionPrototypeFunctionEvaluate(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSXPathExpression::s_info))
        return throwError(exec, TypeError);
    JSXPathExpression* castedThisObj = static_cast<JSXPathExpression*>(asObject(thisValue));
    XPathExpression* imp = static_cast<XPathExpression*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* contextNode = toNode(args.at(0));
    unsigned short type = args.at(1).toInt32(exec);
    XPathResult* inResult = toXPathResult(args.at(2));


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->evaluate(contextNode, type, inResult, ec)));
    setDOMException(exec, ec);
    return result;
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, XPathExpression* object)
{
    return getDOMObjectWrapper<JSXPathExpression>(exec, globalObject, object);
}
XPathExpression* toXPathExpression(JSC::JSValue value)
{
    return value.inherits(&JSXPathExpression::s_info) ? static_cast<JSXPathExpression*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(XPATH)
