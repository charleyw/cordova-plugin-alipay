Cordova 支付宝支付插件
======

还在开发中，待加入订单信息

## 支持的系统

* iOS
* Android

## 手动安装
1. 使用git命令将插件下载到本地，并标记为$CORDOVA_PLUGIN_DIR

		git clone https://github.com/charleyw/cordova-plugin-alipay.git && cd cordova-plugin-alipay && export CORDOVA_PLUGIN_DIR=$(pwd)

2. 修改$CORDOVA_PLUGIN_DIR/plugin.xml，将
		<preference name="PRIVATE_KEY"/>
改成
		<preference name="PRIVATE_KEY" value="你生成的private key"/>

3. 安装
		cordova plugin add $CORDOVA_PLUGIN_DIR --variable PARTNER_ID=[你的商户PID可以在账户中查询] --variable SELLER_ACCOUNT=[你的商户支付宝帐号]

## 为什么不能自动安装
正常情况下，应该是可以使用下面的命令安装的

	cordova plugin add $CORDOVA_PLUGIN_DIR --variable PARTNER_ID=[你的商户PID可以在账户中查询] --variable SELLER_ACCOUNT=[你的商户支付宝帐号] --variable PRIVATE_KEY=[你生成的private key]

但是因为private key里面有时会有等到（=），而当前版本的cordova（v5.1.1）有一个bug，当参数中有等号（=）的时候就不能正常解析变量值了。这个bug已经在cordova的master上已经修好了，但是还没有发布。
