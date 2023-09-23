TEMPLATE = subdirs

SUBDIRS += \
    AbstractFactory \
    Adapter \
    Bridge \
    Builder \
    Command \
    Component \
    Decorate \
    Facade \
    FactoryMethod \
    Flyweight \
    Interpreter \
    Iterator \
    Mediator \
    Memento \
    Prototype \
    Proxy \
    PublishSubscribe \
    Responsibility \
    Simplefactory \
    Singleton \
    State \
    Strategy \
    TemplateMethod \
    Visitor

# 1. Simplefactory      简单工厂模式
# 2. Strategy           策略模式
# 3.                    单一职责原则
# 4.                    开放封闭原则
# 5.                    依赖倒转原则
# 6. Decorate           装饰模式
# 7. Proxy              代理模式
# 8. FactoryMethod      工厂方法模式
# 9. Prototype          原型模式
# 10.TemplateMethod     模板方法模式
# 11.LoD                迪米特法则
# 12.Facade             外观模式
# 13.Builder            建造者模式
# 14.PublishSubscribe   观察者模式
# 15.AbstractFactory    抽象工厂模式
# 16.State              状态模式
# 17.Adapter            适配器模式
# 18.Memento            备忘录模式
# 19.Composite          组合模式
# 20.Iterator           迭代器模式
# 21.Singleton          单例模式
# 22.Bridge             桥接模式
# 23.Command            命令模式
# 24.Responsibility     职责链模式
# 25.Mediator           中介者模式
# 26.Flyweight          享元模式
# 27.Interpreter        解释器模式
# 28.Visitor            访问者模式

# 设计模式总体来说分为三大类：
# 创建型模式: 8.工厂方法模式, 15.抽象工厂模式, 21.单例模式, 13.建造者模式, 9.原型模式;
# 结构型模式: 17.适配器模式, 6.装饰模式, 7.代理模式, 12.外观模式, 22.桥接模式, 19.组合模式, 26.享元模式;
# 行为型模式: 2.策略模式, 10.模板方法模式, 14.观察者模式, 20.迭代器模式, 24.职责链模式, 23.命令模式, 18.备忘录模式, 16.状态模式, 28.访问者模式, 25.中介者模式, 27.解释器模式;
