var checkIfInstanceOf = function(obj, classFunction) {

    if (obj === null || obj === undefined) {
        return false;
    }

    if (classFunction === null || classFunction === undefined) {
        return false;
    }

    if (typeof classFunction !== "function") {
        return false;
    }

    let current = Object.getPrototypeOf(obj);

    while (current !== null) {

        if (current === classFunction.prototype) {
            return true;
        }

        current = Object.getPrototypeOf(current);
    }

    return false;
};