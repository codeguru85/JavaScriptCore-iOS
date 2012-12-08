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

#ifndef JSArrayBufferView_h
#define JSArrayBufferView_h

#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>
#include <wtf/ArrayBufferView.h>

namespace WebCore {

class JSArrayBufferView : public JSC::JSNonFinalObject {
public:
    typedef JSNonFinalObject Base;
    static JSArrayBufferView* create(JSC::Structure* structure, JSC::JSGlobalObject* globalObject, PassRefPtr<ArrayBufferView> impl)
    {
        JSArrayBufferView* ptr = new (NotNull, JSC::allocateCell<JSArrayBufferView>(globalObject->globalData().heap)) JSArrayBufferView(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSArrayBufferView();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    ArrayBufferView* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    ArrayBufferView* m_impl;
protected:
    JSArrayBufferView(JSC::Structure*, JSC::JSGlobalObject*, PassRefPtr<ArrayBufferView>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSArrayBufferViewOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

/*
inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, ArrayBufferView*)
{
    DEFINE_STATIC_LOCAL(JSArrayBufferViewOwner, jsArrayBufferViewOwner, ());
    return &jsArrayBufferViewOwner;
}


inline void* wrapperContext(DOMWrapperWorld* world, ArrayBufferView*)
{
    return world;
}
*/

JSC::JSValue toJS(JSC::ExecState*, JSC::JSGlobalObject*, ArrayBufferView*);
ArrayBufferView* toArrayBufferView(JSC::JSValue);

class JSArrayBufferViewPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSArrayBufferViewPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSArrayBufferViewPrototype* ptr = new (NotNull, JSC::allocateCell<JSArrayBufferViewPrototype>(globalData.heap)) JSArrayBufferViewPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSArrayBufferViewPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsArrayBufferViewBuffer(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsArrayBufferViewByteOffset(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsArrayBufferViewByteLength(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
