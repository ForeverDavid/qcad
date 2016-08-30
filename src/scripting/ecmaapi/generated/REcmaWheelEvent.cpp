// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaWheelEvent.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RGraphicsView.h"
            
                #include "RGraphicsScene.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaInputEvent.h"
                 void REcmaWheelEvent::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RWheelEvent*) 0)));
        protoCreated = true;
    }

    
        // primary base class QWheelEvent:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QWheelEvent*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        REcmaInputEvent::initEcma(engine, proto);
          
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QWheelEvent
        REcmaHelper::registerFunction(&engine, proto, getQWheelEvent, "getQWheelEvent");
        
        // conversion for base class RInputEvent
        REcmaHelper::registerFunction(&engine, proto, getRInputEvent, "getRInputEvent");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

        // properties of secondary base class RInputEvent:
        

        // methods of secondary base class RInputEvent:
        
            REcmaHelper::registerFunction(&engine, proto, getModelPosition, "getModelPosition");
            
            REcmaHelper::registerFunction(&engine, proto, setModelPosition, "setModelPosition");
            
            REcmaHelper::registerFunction(&engine, proto, setScreenPosition, "setScreenPosition");
            
            REcmaHelper::registerFunction(&engine, proto, getScreenPosition, "getScreenPosition");
            
            REcmaHelper::registerFunction(&engine, proto, getGraphicsView, "getGraphicsView");
            
            REcmaHelper::registerFunction(&engine, proto, getGraphicsScene, "getGraphicsScene");
            
            REcmaHelper::registerFunction(&engine, proto, isValid, "isValid");
            

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RWheelEvent*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RWheelEvent",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaWheelEvent::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RWheelEvent(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        7
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RVector */
            
                && (
                
                        context->argument(
                        1
                        ).isNumber()
                ) /* type: int */
            
                && (
                
                        context->argument(
                        2
                        ).isNumber()
                ) /* type: Qt::MouseButtons */
            
                && (
                
                        context->argument(
                        3
                        ).isNumber()
                ) /* type: Qt::KeyboardModifiers */
            
                && (
                
                        context->argument(
                        4
                        ).isNumber()
                ) /* type: Qt::Orientation */
            
                && (
                
                        context->argument(
                        5
                        ).isVariant()
                        ||
                    
                        context->argument(
                        5
                        ).isQObject()
                        ||
                    
                        context->argument(
                        5
                        ).isNull()
                ) /* type: RGraphicsScene */
            
                && (
                
                        context->argument(
                        6
                        ).isVariant()
                        ||
                    
                        context->argument(
                        6
                        ).isQObject()
                        ||
                    
                        context->argument(
                        6
                        ).isNull()
                ) /* type: RGraphicsView */
            
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RWheelEvent: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument isStandardType
                    int
                    a1 =
                    (int)
                    
                    context->argument( 1 ).
                    toNumber();
                
                    // argument isStandardType
                    Qt::MouseButtons
                    a2 =
                    (Qt::MouseButtons)
                    (int)
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    Qt::KeyboardModifiers
                    a3 =
                    (Qt::KeyboardModifiers)
                    (int)
                    context->argument( 3 ).
                    toNumber();
                
                    // argument isStandardType
                    Qt::Orientation
                    a4 =
                    (Qt::Orientation)
                    (int)
                    context->argument( 4 ).
                    toNumber();
                
                    // argument is reference
                    RGraphicsScene*
                    ap5 =
                    qscriptvalue_cast<
                    RGraphicsScene*
                        >(
                        context->argument(
                        5
                        )
                    );
                    if( ap5 == NULL ){
                           return REcmaHelper::throwError("RWheelEvent: Argument 5 is not of type RGraphicsScene*.",
                               context);                    
                    }
                    RGraphicsScene& a5 = *ap5;
                
                    // argument is reference
                    RGraphicsView*
                    ap6 =
                    qscriptvalue_cast<
                    RGraphicsView*
                        >(
                        context->argument(
                        6
                        )
                    );
                    if( ap6 == NULL ){
                           return REcmaHelper::throwError("RWheelEvent: Argument 6 is not of type RGraphicsView*.",
                               context);                    
                    }
                    RGraphicsView& a6 = *ap6;
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RWheelEvent
                    * cppResult =
                    new
                    RWheelEvent
                    (
                    a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4
        ,
    a5
        ,
    a6
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        3
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                ) /* type: QWheelEvent */
            
                && (
                
                        context->argument(
                        1
                        ).isVariant()
                        ||
                    
                        context->argument(
                        1
                        ).isQObject()
                        ||
                    
                        context->argument(
                        1
                        ).isNull()
                ) /* type: RGraphicsScene */
            
                && (
                
                        context->argument(
                        2
                        ).isVariant()
                        ||
                    
                        context->argument(
                        2
                        ).isQObject()
                        ||
                    
                        context->argument(
                        2
                        ).isNull()
                ) /* type: RGraphicsView */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    QWheelEvent*
                    ap0 =
                    qscriptvalue_cast<
                    QWheelEvent*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RWheelEvent: Argument 0 is not of type QWheelEvent*.",
                               context);                    
                    }
                    QWheelEvent& a0 = *ap0;
                
                    // argument is reference
                    RGraphicsScene*
                    ap1 =
                    qscriptvalue_cast<
                    RGraphicsScene*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RWheelEvent: Argument 1 is not of type RGraphicsScene*.",
                               context);                    
                    }
                    RGraphicsScene& a1 = *ap1;
                
                    // argument is reference
                    RGraphicsView*
                    ap2 =
                    qscriptvalue_cast<
                    RGraphicsView*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if( ap2 == NULL ){
                           return REcmaHelper::throwError("RWheelEvent: Argument 2 is not of type RGraphicsView*.",
                               context);                    
                    }
                    RGraphicsView& a2 = *ap2;
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RWheelEvent
                    * cppResult =
                    new
                    RWheelEvent
                    (
                    a0
        ,
    a1
        ,
    a2
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        4
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                ) /* type: QWheelEvent */
            
                && (
                
                        context->argument(
                        1
                        ).isVariant()
                        ||
                    
                        context->argument(
                        1
                        ).isQObject()
                        ||
                    
                        context->argument(
                        1
                        ).isNull()
                ) /* type: RGraphicsScene */
            
                && (
                
                        context->argument(
                        2
                        ).isVariant()
                        ||
                    
                        context->argument(
                        2
                        ).isQObject()
                        ||
                    
                        context->argument(
                        2
                        ).isNull()
                ) /* type: RGraphicsView */
            
                && (
                
                        context->argument(
                        3
                        ).isNumber()
                ) /* type: qreal */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    QWheelEvent*
                    ap0 =
                    qscriptvalue_cast<
                    QWheelEvent*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RWheelEvent: Argument 0 is not of type QWheelEvent*.",
                               context);                    
                    }
                    QWheelEvent& a0 = *ap0;
                
                    // argument is reference
                    RGraphicsScene*
                    ap1 =
                    qscriptvalue_cast<
                    RGraphicsScene*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RWheelEvent: Argument 1 is not of type RGraphicsScene*.",
                               context);                    
                    }
                    RGraphicsScene& a1 = *ap1;
                
                    // argument is reference
                    RGraphicsView*
                    ap2 =
                    qscriptvalue_cast<
                    RGraphicsView*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if( ap2 == NULL ){
                           return REcmaHelper::throwError("RWheelEvent: Argument 2 is not of type RGraphicsView*.",
                               context);                    
                    }
                    RGraphicsView& a2 = *ap2;
                
                    // argument isStandardType
                    qreal
                    a3 =
                    (qreal)
                    
                    context->argument( 3 ).
                    toNumber();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RWheelEvent
                    * cppResult =
                    new
                    RWheelEvent
                    (
                    a0
        ,
    a1
        ,
    a2
        ,
    a3
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RWheelEvent(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaWheelEvent::getQWheelEvent(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QWheelEvent* cppResult =
                    qscriptvalue_cast<RWheelEvent*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaWheelEvent::getRInputEvent(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RInputEvent* cppResult =
                    qscriptvalue_cast<RWheelEvent*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaWheelEvent::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RWheelEvent"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaWheelEvent::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QWheelEvent");
    
        list.append("RInputEvent");
    

        return qScriptValueFromSequence(engine, list);
    }
    
        // properties of secondary base class RInputEvent:
        

        // methods of secondary base class RInputEvent:
         QScriptValue
        REcmaWheelEvent::getModelPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaWheelEvent::getModelPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaWheelEvent::getModelPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RWheelEvent* self = 
                        getSelf("getModelPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->getModelPosition();
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RWheelEvent.getModelPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaWheelEvent::getModelPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaWheelEvent::setModelPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaWheelEvent::setModelPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaWheelEvent::setModelPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RWheelEvent* self = 
                        getSelf("setModelPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RInputEvent: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setModelPosition(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RWheelEvent.setModelPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaWheelEvent::setModelPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaWheelEvent::setScreenPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaWheelEvent::setScreenPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaWheelEvent::setScreenPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RWheelEvent* self = 
                        getSelf("setScreenPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RInputEvent: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setScreenPosition(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RWheelEvent.setScreenPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaWheelEvent::setScreenPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaWheelEvent::getScreenPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaWheelEvent::getScreenPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaWheelEvent::getScreenPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RWheelEvent* self = 
                        getSelf("getScreenPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->getScreenPosition();
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RWheelEvent.getScreenPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaWheelEvent::getScreenPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaWheelEvent::getGraphicsView
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaWheelEvent::getGraphicsView", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaWheelEvent::getGraphicsView";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RWheelEvent* self = 
                        getSelf("getGraphicsView", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RGraphicsView &'
    RGraphicsView & cppResult =
        
               self->getGraphicsView();
        // return type: RGraphicsView &
                // reference
                result = engine->newVariant(
                QVariant::fromValue(&cppResult));
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RWheelEvent.getGraphicsView().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaWheelEvent::getGraphicsView", context, engine);
            return result;
        }
         QScriptValue
        REcmaWheelEvent::getGraphicsScene
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaWheelEvent::getGraphicsScene", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaWheelEvent::getGraphicsScene";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RWheelEvent* self = 
                        getSelf("getGraphicsScene", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RGraphicsScene &'
    RGraphicsScene & cppResult =
        
               self->getGraphicsScene();
        // return type: RGraphicsScene &
                // reference
                result = engine->newVariant(
                QVariant::fromValue(&cppResult));
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RWheelEvent.getGraphicsScene().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaWheelEvent::getGraphicsScene", context, engine);
            return result;
        }
         QScriptValue
        REcmaWheelEvent::isValid
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaWheelEvent::isValid", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaWheelEvent::isValid";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RWheelEvent* self = 
                        getSelf("isValid", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->isValid();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RWheelEvent.isValid().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaWheelEvent::isValid", context, engine);
            return result;
        }
        

    // properties:
    

    // public methods:
     QScriptValue REcmaWheelEvent::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RWheelEvent* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RWheelEvent(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaWheelEvent::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RWheelEvent* self = getSelf("RWheelEvent", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RWheelEvent* REcmaWheelEvent::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RWheelEvent* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RWheelEvent >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RWheelEvent.%1(): "
                        "This object is not a RWheelEvent").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RWheelEvent* REcmaWheelEvent::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RWheelEvent* selfBase = getSelf(fName, context);
                RWheelEvent* self = dynamic_cast<RWheelEvent*>(selfBase);
                //return REcmaHelper::scriptValueTo<RWheelEvent >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RWheelEvent.%1(): "
                    "This object is not a RWheelEvent").arg(fName),
                    context);
            }

            return self;
            


        }
        